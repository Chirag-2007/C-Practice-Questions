// Problem Statement 51
// Simran wants to use pointer to union
// Write a program that:
// ● Uses union
// ● Uses pointer to union
// ● Assigns and prints value
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

#include<stdio.h>

union val{
    int n;
};

int main(){
    union val s;
    union val *ptr = &s;
    scanf("%d",&(*ptr).n);
    printf("%d",ptr->n);
    return 0;
}