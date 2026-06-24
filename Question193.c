// Problem Statement 7
// Neha wants to find the minimum element using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to find minimum
// ● Prints the minimum
// Sample Test Case 1
// Input:
// 5
// 1 9 3 4 5
// Output:
// 1
// Sample Test Case 2
// Input:
// 3
// -1 -5 -2
// Output:
// -5

#include<stdio.h>

int min_elm(int* arr, int n){
    int min = *arr;
    for(int i = 1; i < n; i++){
        if(*(arr + i) < min){
            min = *(arr + i);
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",min_elm(arr, n));
    return 0;
}