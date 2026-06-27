// Problem Statement 26
// Aman wants to find factorial using recursion
// Write a program that:
// ● Reads an integer
// ● Uses recursion to find factorial
// ● Prints the result
// Sample Test Case 1
// Input:
// 5
// Output:
// 120
// Sample Test Case 2
// Input:
// 3
// Output:
// 6

#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = factorial(n);
    printf("%d",ans);
    return 0;
}