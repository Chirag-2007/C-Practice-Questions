// Problem Statement 15
// Vikas wants to check if array is palindrome using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to check palindrome
// ● Prints 1 if yes, else 0
// Sample Test Case 1
// Input:
// 5
// 1 2 3 2 1
// Output:
// 1
// Sample Test Case 2
// Input:
// 3
// 1 2 3
// Output:
// 0

#include<stdio.h>

int checkPalindrome(int *arr, int n){
    int *start = arr;
    int *end = arr + n - 1;
    while(start < end){
        if(*start != *end){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}   

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int val = checkPalindrome(arr,n);
    printf("%d",val);
    return 0;
}