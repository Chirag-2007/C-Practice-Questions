// QUESTION 3 — Reverse a String (NO strrev allowed)
// Input:
// hello world
// Output:
// dlrow olleh

#include<stdio.h>
int main(){
    char str[25];
    scanf("%[^\n]s",str);
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    for(int i = count- 1; i >= 0 ; i--){
        printf("%c",str[i]);
    }
    return 0;
}