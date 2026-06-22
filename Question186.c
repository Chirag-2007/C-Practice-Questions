// Q13.  Reverse a string using recursion
// Complete the function reverseString() that takes a string str as parameter and prints the reverse of the string using recursion.
// Note :
// Use recursion only.
// Do not use loops.
// You can use helper functions (if required).
// Input Format:
// A single line containing the string s.
// Output Format:
// Print the reversed string.
// Constraints:
// 1 ≤ length of s ≤ 1000
// The string may contain letters, digits, spaces, and special characters.
// Sample Input 1:
// hello
// Sample Output 1:
// olleh
// Explanation:
// The string contains the characters: h, e, l, l, o.
// When reversed using recursion, the order of characters becomes: olleh
// Sample Input 2:
// A man, a plan, a canal: Panama
// Sample Output 2
// amanaP :lanac a ,nalp a ,nam A
// Explanation:
// The string contains letters, spaces, commas, and a colon.
// While reversing, every character is treated the same, including spaces and punctuation.
// Therefore, 
// Original order: A man, a plan, a canal: Panama
// Reversed order: amanaP :lanac a ,nalp a ,nam A

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
    for(int i = count - 1; i >= 0; i--){
        printf("%c",str[i]);
    }
    return 0;
}