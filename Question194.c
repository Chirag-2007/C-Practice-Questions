// Problem Statement 8
// Arjun wants to search for an element using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Reads element x
// ● Uses pointers to search x
// ● Prints index (0-based) or -1
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// 3
// Output:
// 2
// Sample Test Case 2
// Input:
// 3
// 10 20 30
// 40
// Output:
// -1

#include<stdio.h>

int search(int* arr,int elm, int n){
    int found = -1;
    for(int i = 0; i < n; i++){
        if(*(arr + i) == elm){
            found = i;
            break;
        }
    }
    return found;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);
    }
    int elm;
    scanf("%d",&elm);
    printf("%d",search(arr, elm, n));
    return 0;
}