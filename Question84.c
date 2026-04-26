// Question:Remove all spaces from a string
// Input:
// "Hello World"
// Output:
// "HelloWorld"

#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    for(int i = 0; i < count; i++){
        if(str[i] != ' '){
            printf("%c",str[i]);
        }
    }
    return 0;
}