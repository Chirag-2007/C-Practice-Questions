// Aman wants to allocate memory for n integers using malloc
// Write a program that:
// ● Reads size n
// ● Allocates memory using malloc
// ● Reads n integers
// ● Prints them
// Sample Test Case 1
// Input:
// 3
// 1 2 3
// Output:
// 1 2 3
// Sample Test Case 2
// Input:
// 4
// 5 6 7 8
// Output:
// 5 6 7 8

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}