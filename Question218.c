// Problem Statement 32
// Ravi wants to find sum of first n natural numbers using recursion
// Write a program that:
// ● Reads an integer n
// ● Uses recursion
// ● Prints sum
// Sample Test Case 1
// Input:
// 5
// Output:
// 15
// Sample Test Case 2
// Input:
// 3
// Output:
// 6

#include<stdio.h>

int sum_num(int n){
    if(n == 0){
        return 0;
    }
    return n + sum_num(n - 1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum_num(n));
    return 0;
}