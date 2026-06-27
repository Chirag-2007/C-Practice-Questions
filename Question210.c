// Problem Statement 24
// Priya wants to find factorial using function.
// Write a program that:
// ● Reads an integer
// ● Uses a function with pointer
// ● Returns factorial
// Sample Test Case 1
// Input:
// 5
// Output:
// 120
// Sample Test Case 2
// Input:
// 3
// Output:
// 6

#include<stdio.h>

int factorial(int* n){
    int fact = 1;
    for(int i = 1; i <= *n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",factorial(&n));
    return 0;
}