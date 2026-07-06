// Problem Statement 69
// Karan wants to reverse array using dynamic memory
// Write a program that:
// ● Reads size n
// ● Allocates memory
// ● Reads elements
// ● Reverses array
// ● Prints result
// Sample Test Case 1
// Input:
// 3
// 1 2 3
// Output:
// 3 2 1
// Sample Test Case 2
// Input:
// 4
// 5 6 7 8
// Output:
// 8 7 6 5

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n - 1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}