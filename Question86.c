// Given a string, return the first non-repeating character. If none exists, return '-'.
// Example:
// Input: "swiss"
// Output: 'w'

#include<stdio.h>
int main(){
    char str[25];
    scanf("%[^\n]s",str);
    int i  = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    for(int i = 0; i < count; i++){
        int flag = 0;
        for(int j = 0; j < count; j++){
            if(str[i] == str[j] && i != j){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%c",str[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
}