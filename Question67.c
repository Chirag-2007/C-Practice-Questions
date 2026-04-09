// Count vowels in a string

#include<stdio.h>
int main(){
    char str[20];
    scanf("%[^\n]",str);
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    int count_vowel = 0;
    for(int j = 0; j < count; j++){
        if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' ||str[j] == 'A' || str[j] == 'E' || str[j] == 'I' ||str[j] == 'O' || str[j] == 'U'){
            count_vowel++;
        }
    }
    printf("%d",count_vowel);
    return 0;
}