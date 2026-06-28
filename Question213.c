// Problem Statement 27
// Rahul wants to find sum of digits using recursion
// Write a program that:
// ● Reads an integer
// ● Uses recursion to find sum of digits
// ● Prints the result
// Sample Test Case 1
// Input:
// 1234
// Output:
// 10
// Sample Test Case 2
// Input:
// 900
// Output:
// 9

#include<stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sum(n / 10);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = sum(n);
    printf("%d",ans);
    return 0;
}