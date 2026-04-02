// QUESTION 2 — Check Palindrome String (WITHOUT strrev)
// Input:
// level
// Output:
// Palindrome

#include<stdio.h>
#include <string.h>
int main(){
    char str[25];
    scanf("%[^\n]s",str);
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    char rev[25];
    int k = 0;
    for(int i = count- 1; i >= 0 ; i--){
        rev[k] = str[i];
        k++;
    }
    rev[k] = '\0';
    if(strcmp(str, rev) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}