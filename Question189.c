// Problem Statement 2
// Rahul wants to find the maximum element using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to find maximum
// ● Prints the maximum
// Sample Test Case 1
// Input:
// 5
// 1 9 3 4 5
// Output:
// 9
// Sample Test Case 2
// Input:
// 3
// -1 -5 -2
// Output:
// -1

#include<stdio.h>

 int max_elm(int * arr, int n){
    int max = *arr;
    for(int i = 0; i < n; i++){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max_elm(arr,n));
    return 0;
}