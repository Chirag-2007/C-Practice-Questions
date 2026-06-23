// Problem Statement 4
// Aman wants to count even numbers using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to count even numbers
// ● Prints the count
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// 2
// Sample Test Case 2
// Input:
// 4
// 2 4 6 8
// Output:
// 4

#include<stdio.h>

int count_even(int* arr, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",count_even(arr,n));
    return 0;
}