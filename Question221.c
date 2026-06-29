// Problem Statement 35
// Vikas wants to print numbers from 1 to n using recursion
// Write a program that:
// ● Reads an integer
// ● Uses recursion
// ● Prints numbers from 1 to n
// Sample Test Case 1
// Input:
// 5
// Output:
// 1 2 3 4 5
// Sample Test Case 2
// Input:
// 3
// Output:
// 1 2 3
#include<stdio.h>

void num(int n){
    if(n == 0){
        return;
    }
    num(n - 1);
    printf("%d ",n);
}

int main(){
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}