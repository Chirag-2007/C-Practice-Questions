// Problem Statement 14
// Meena wants to count elements greater than a given value using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Reads value x
// ● Uses pointers to count elements > x
// ● Prints count
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// 3
// Output:
// 2
// Sample Test Case 2
// Input:
// 4
// 5 6 7 8
// 6
// Output:
// 2

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int count = 0;
    int *ptr = arr;
    for(int i = 0; i < n; i++){
        if(*(ptr + i) > x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}