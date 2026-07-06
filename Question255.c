// Problem Statement 68
// Neha wants to find maximum using dynamic array
// Write a program that:
// ● Reads size n
// ● Uses malloc
// ● Reads n integers
// ● Finds maximum
// ● Prints result
// Sample Test Case 1
// Input:
// 3
// 1 5 2
// Output:
// 5
// Sample Test Case 2
// Input:
// 4
// -1 -2 -3 -4
// Output:
// -1

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    free(arr);
    return 0;
}