// Q8.  How many numbers are equal to its reverse
// Write a program to check how many palindrome numbers are present between a and b. Palindrome Number are those numbers which are equal to their reverse.
// For Example 757 is a palindrome number, where 754 is not a Palindrome number.
// Input Format
// Two integers separated by a space:
// The first integer represents the start of the range (inclusive).
// The second integer represents the end of the range (inclusive).
// Output Format
// A single integer, The total count of numbers within that range that read the same forwards and backwards.
// Sample Input
// 100 111
// Sample Output
// 2
// Explanation:
// For Input : 100 111
// There are only 2 numbers between them that are palindrome, i.e. numbers which are equal to their reverse. Those numbers are 101 & 111

#include<stdio.h>

int rev(int x){
    int rev = 0;
    while(x > 0){
        int last = x % 10;
        rev = rev * 10 + last;
        x = x / 10;
    }
    return rev;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);\
    int count = 0;
    for(int i = n; i <= m; i++){
        int reverse = rev(i);
        if(i == reverse){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}