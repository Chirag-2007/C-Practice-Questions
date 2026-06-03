// Q9.  Check the character
// Write a program to determine whether the character is a capital letter, a small case letter, a digit or a special symbol.
// The following table shows the range of ASCII values for various characters.
// Input Format:
// Each test case will contain a character c.
// Output Format:
// print 
// “UPPER CASE” for uppercase characters OR
// “lower case” for lowercase characters OR
// “Digit” for digits OR
// “Special character” for special characters 
// Sample Input 1
// A
// Sample Output 1
// UPPER CASE 
// Sample Input 2
// &
// Sample Output 2
// Special character

#include<stdio.h>
int main(){
    char ch;
    scanf(" %c",&ch);
    if(ch >= 48 && ch <= 57){
        printf("Digit");
    }
    else if(ch >= 65 && ch <= 90){
        printf("UPPER CASE");
    }
    else if(ch >= 97 && ch <= 122){
        printf("lower case");
    }
    else if(ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127 ){
        printf("Special character");
    }
    return 0;
}