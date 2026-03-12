// Problem Statement : You are provided with a character ch and you have to check whether the given character is an alphabet or not. If a given character is an alphabet then print ”Character is an alphabet”  else print ”Character is not an alphabet” .
// Input Format
// The first line of the input contains a single character ch.
// Constraints 
// A <= ch <= Z
// a <=ch <= z
// Output Format
// Print the required result accordingly.
// Sample Input
// a
// Sample Output
// Character is an alphabet
// Sample Input
// 1
// Sample Output
// Character is not an alphabet

#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("Character is an alphabet");
    }
    else{
        printf("Character is not an alphabet");
    }
    return 0;
}