// Problem Statement 25
// Amit wants to check if number is positive using function.
// Write a program that:
// ● Reads an integer
// ● Uses a function with pointer
// ● Returns 1 if positive else 0
// Sample Test Case 1
// Input:
// 5
// Output:
// 1
// Sample Test Case 2
// Input:
// -3
// Output:
// 0

#include<stdio.h>

int check_positive(int* n){
    if(*n > 0){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",check_positive(&n));
    return 0;
}