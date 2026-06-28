// Problem Statement 30
// Simran wants to find Fibonacci using recursion
// Write a program that:
// ● Reads an integer n
// ● Uses recursion
// ● Prints nth Fibonacci number
// Sample Test Case 1
// Input:
// 5
// Output:
// 5
// Sample Test Case 2
// Input:
// 6
// Output:
// 8

#include<stdio.h>

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = fib(n);
    printf("%d",ans);
    return 0;
}