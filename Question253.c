// Problem Statement 66
// Riya wants to find sum using calloc
// Write a program that:
// ● Reads size n
// ● Allocates memory using calloc
// ● Reads n integers
// ● Prints sum
// Sample Test Case 1
// Input:
// 3
// 1 2 3
// Output:
// 6
// Sample Test Case 2
// Input:
// 4
// 5 5 5 5
// Output:
// 20

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    printf("%d",total);
    free(arr);
    return 0;
}