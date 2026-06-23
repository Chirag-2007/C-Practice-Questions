// Problem Statement 1
// Riya wants to find the average of array elements using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to calculate average
// ● Prints the average
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// 3
// Sample Test Case 2
// Input:
// 4
// 2 4 6 8
// Output:
// 5
// Hidden Test Cases
// Test Case | Input | Output
// Hidden 1 | 1 → 10 | 10
// Hidden 2 | 2 → 1 3 | 2
// Hidden 3 | 3 → 5 5 5 | 5
// Hidden 4 | 4 → 0 0 0 0 | 0
// Hidden 5 | 5 → 1 2 3 4 6 | 3

#include<stdio.h>

float avg(int * arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += *(arr + i);
    }
    return sum / n;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("%.0f",avg(arr,n));
    return 0;
}