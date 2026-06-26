// Problem Statement 21
// Simran wants to find square using function.
// Write a program that:
// ● Reads an integer
// ● Uses a function with pointer
// ● Returns square
// Sample Test Case 1
// Input:
// 5
// Output:
// 25
// Sample Test Case 2
// Input:
// -4
// Output:
// 16

#include<stdio.h>

int square(int* n){
    return *n * *n;
}
    
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",square(&n));
    return 0;
}