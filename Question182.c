// Q9.  Count total vowels, consonants in string
// Given a string consisting of alphabet characters, Your task is to determine how many vowels and consonants are present in the given string.
// Input Format
// First line contains the string.
// Output Format
// Print two integers separated by a space:
// The number of vowels
// The number of consonants
// Constraints
// 1 ≤ length of string ≤ 10⁵
// The string may contains lowercase, uppercase or combination of both alphabet characters.
// Sample Input
// codequotient
// Sample Output
// 6 6
// Explanation
// The string is "codequotient".
// Vowels present in the string:
// o, e, u, o, i, e → 6 vowels
// Remaining letters are consonants:
// c, d, q, t, n, t → 6 consonants
// Therefore, the output is:
// 6 6

#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i = 0;
    int count_vowels = 0;
    int count_consonants = 0;
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count_vowels++;
        }
        else if('a' <= str[i] <= 'z' || 'A' <= str[i] <= 'Z'){
            count_consonants++;
        }
        i++;
    }
    printf("%d %d",count_vowels,count_consonants);
    return 0;
}