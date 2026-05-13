// Write a C program which can convert Lowercase to Uppercase of given string. 
// NOTE: String length will not exceed limit of 100.  
// Input format : First line take string input 
// Output format : Print the converted string 
// Sample Input 1 : 
// raamMohan 
// Sample Output 1 : 
// RAAMMOHAN 
// Sample Input 2 : 
// raamMohan 
// Sample Output 2 : 
// RAAMMOHAN 

// Method 1 -->

#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    printf("%s",str);
    return 0;
}

// Method 2 -->
// a --> 97
// A --> 65
// 97 - 65 = 32

#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    for(int i = 0; str[i] != '\0'; i++){
        if((str[i]>='a' && str[i]<='z')){
            str[i] = str[i] - 32;
        }
    }
    printf("%s",str);
    return 0;
}