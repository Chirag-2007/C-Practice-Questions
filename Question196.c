// Problem Statement 10
// Priya wants to multiply all elements using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to calculate product
// ● Prints the product
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// 120
// Sample Test Case 2
// Input:
// 3
// 2 3 4
// Output:
// 24

#include<stdio.h>

int prd_elm(int *arr, int n){
    int prd = 1;
    for(int i = 0; i < n; i++){
        prd = *(arr + i) * prd;
    }
    return prd;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",prd_elm(arr, n));
    return 0;
}