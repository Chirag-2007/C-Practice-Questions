// Problem Statement 11
// Amit wants to swap first and last element using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to swap first and last
// ● Prints updated array
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// 5 2 3 4 1
// Sample Test Case 2
// Input:
// 3
// 10 20 30
// Output:
// 30 20 10

#include<stdio.h>

void reverse(int *arr, int n){
    int i = 0;
    int j = n - 1;
    while(i <= j){
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}