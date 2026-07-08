// Q10. Problem Statement 
// Write a C program to reverse an array using pointers. Implement a function that takes a pointer to the array and its size as 
// arguments and reverses the array in place.

#include<stdio.h>

void reverse(int* arr, int n){
    int i = 0, j = n - 1;
    while(i < j){
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