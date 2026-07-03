// Problem Statement 53
// Ravi wants to access structure array using pointer
// Write a program that:
// ● Uses array of structures
// ● Uses pointer
// ● Prints elements
// Sample Test Case 1
// Input:
// 1 2 3
// Output:
// 1 2 3
// Sample Test Case 2
// Input:
// 4 5 6
// Output:
// 4 5 6

#include<stdio.h>

struct num{
    int n;
};

int main(){
    struct num arr[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&arr[i].n);
    }
    for(int i = 0; i < 3; i++){
        printf("%d ",arr[i].n);
    }
    return 0;
}