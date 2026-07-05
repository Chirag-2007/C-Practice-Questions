// Problem Statement 63
// Rahul wants to use register variable
// Write a program that:
// ● Uses register variable
// ● Prints value
// Sample Test Case 1
// Input:
// 5
// Output:
// 5
// Sample Test Case 2
// Input:
// 10
// Output:
// 10

#include <stdio.h>

int main(){
    register int x;
    scanf("%d",&x);
    printf("%d",x);
    return 0;
}