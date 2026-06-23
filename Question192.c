// Problem Statement 5
// Ravi wants to copy one array to another using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to copy elements
// ● Prints new array
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

void copy(int* arr, int* brr,int n){
    for(int i = 0; i < n; i++){
        *(brr + i) = *(arr + i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int brr[n];
    copy(arr, brr, n);
    for(int i = 0; i < n; i++){
        printf("%d ",brr[i]);
    }
    return 0;
}