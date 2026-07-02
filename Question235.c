// Problem Statement 49
// Neha wants to swap two structures using pointer arithmetic
// Write a program that:
// ● Uses array of structures
// ● Uses pointer arithmetic
// ● Swaps first and last
// ● Prints result
// Sample Test Case 1
// Input:
// 1 2 3
// Output:
// 3 2 1
// Sample Test Case 2
// Input:
// 5 6 7
// Output:
// 7 6 5

#include<stdio.h>
struct num{
    int n;
};

int main(){
    struct num arr[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&arr[i].n);
    }
    struct num *p = arr;
    struct num temp = *p;
    *p = *(p + 2);
    *(p + 2) = temp;
    for(int i = 0; i < 3; i++){
        printf("%d ",arr[i].n);
    }
    return 0;
}