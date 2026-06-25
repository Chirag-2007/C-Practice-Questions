// Problem Statement 13
// Rohit wants to sum only positive numbers using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to sum positives
// ● Prints the sum
// Sample Test Case 1
// Input:
// 5
// 1 -2 3 -4 5
// Output:
// 9
// Sample Test Case 2
// Input:
// 3
// -1 -2 -3
// Output:
// 0

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int *ptr = arr;
    for(int i = 0; i < n; i++){
        if(*(ptr + i) >= 0){
            sum += *(ptr + i);
        }
    }
    printf("%d",sum);
    return 0;
}