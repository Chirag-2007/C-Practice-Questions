// Problem Statement 67
// Rahul wants to resize array using realloc
// Write a program that:
// ● Reads initial size n
// ● Allocates memory
// ● Reads n elements
// ● Reads new size m
// ● Resizes array using realloc
// ● Reads additional elements
// ● Prints all elements
// Sample Test Case 1
// Input:
// 2
// 1 2
// 4
// 3 4
// Output:
// 1 2 3 4
// Sample Test Case 2
// Input:
// 3
// 5 6 7
// 5
// 8 9
// Output:
// 5 6 7 8 9

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, m;
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    arr = realloc(arr, m * sizeof(int));
    for(int i = n; i < m; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < m; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}