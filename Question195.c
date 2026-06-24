// Problem Statement 9
// Karan wants to count odd numbers using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to count odd numbers
// ● Prints the count
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
// 0

#include<stdio.h>

int count_odd(int* arr, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 != 0){
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
    printf("%d",count_odd(arr,n));
    return 0;
}