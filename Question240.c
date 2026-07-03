// Problem Statement 54
// Priya wants to mix pointer casting with structure
// Write a program that:
// ● Uses structure
// ● Casts pointer to int pointer
// ● Prints first member
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

struct val{
    int n;
};

int main(){
    struct val num;
    scanf("%d",&num.n);
    int *ptr = (int*)&num;
    printf("%d",*ptr);
    return 0;
}