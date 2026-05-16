// Problem: Merge Two Sorted Arrays
// You are given two sorted arrays in ascending order.
// Write a C program to merge them into a single sorted array.

// Conditions
// Both arrays are already sorted
// The final merged array must also be sorted

// Example
// Input
// Array 1: 1 3 5 7
// Array 2: 2 4 6 8

// Output
// Merged Array: 1 2 3 4 5 6 7 8

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    for(int j = 0; j < m; j++){
        scanf("%d",&arr2[j]);
    }
    int merge[n+m];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            merge[k] = arr1[i];
            k++;
            i++;
        }
        else{
            merge[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < n){
        merge[k++] = arr1[i++];
    }
    while(j < m){
        merge[k++] = arr2[j++];
    }
    for(int t = 0; t < m + n; t++){
        printf("%d ",merge[t]);
    }
    return 0;
}