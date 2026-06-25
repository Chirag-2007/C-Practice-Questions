// Problem Statement 12
// Sneha wants to print array in reverse using pointers only (no indexing).
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointer traversal
// ● Prints elements in reverse
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// 5 4 3 2 1
// Sample Test Case 2
// Input:
// 3
// 10 20 30
// Output:
// 30 20 10

#include<stdio.h>

void reverse_ptr(int *arr, int n){
    int *ptr = arr + n - 1;
    for(int i = 0; i < n; i++){
        printf("%d ",*(ptr - i));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    reverse_ptr(arr, n);
    return 0;
}