// Problem Statement 28
// Neha wants to check if a number is palindrome using recursion
// Write a program that:
// ● Reads an integer
// ● Uses recursion
// ● Prints 1 if palindrome else 0
// Sample Test Case 1
// Input:
// 121
// Output:
// 1
// Sample Test Case 2
// Input:
// 123
// Output:
// 0

#include<stdio.h>

int reverse(int n, int rev){
    if(n == 0){
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}

int main(){
    int n;
    scanf("%d",&n);
    if(n == reverse(n,0)){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}