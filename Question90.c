// Method 1 -->

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char rev[100];
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    for(int i = 0; i < count; i++){
        rev[i] = str[count - i - 1];
    }
    rev[count] = '\0';
    if(strcmp(str, rev) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}

// Method 2 -->

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char temp[100];
    scanf("%[^\n]s",str);
    strcpy(temp, str);
    strrev(temp);
    if(strcmp(str, temp) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}