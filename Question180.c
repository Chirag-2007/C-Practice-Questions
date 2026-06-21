// Q7.  Convert upper case to lower case
// Write a program that reads a string containing uppercase letters and converts all characters in the string to lowercase.
// Input Format
// The first line contains a string.
// Output Format
// Print the string after conversion to lower case
// Constraints
// 1 ≤ length of string ≤ 1000
// String contains only uppercase alphabets (A–Z)
// No special characters or digits
// Sample Input
// CODEQUOTIENT
// Sample Output
// codequotient
// Explanation
// The input string is:
// CODEQUOTIENT
// After converting each character to its lowercase equivalent, the resulting string becomes:
// codequotient

#include<stdio.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        str[i] += 32;
        i++;
    }
    for(int i = 0; i < count; i++){
        printf("%c",str[i]);
    }
    return 0;
}