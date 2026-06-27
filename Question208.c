// Problem Statement 22
// Karan wants to find absolute value using function.
// Write a program that:
// ● Reads an integer
// ● Uses a function with pointer
// ● Returns absolute value
// Sample Test Case 1
// Input:
// 5
// Output:
// 5
// Sample Test Case 2
// Input:
// -4
// Output:
// 4

#include<stdio.h>

int absolute(int* n){
    if(*n < 0){
        *n = *n * (-1);
    }
    return *n;
}
    
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",absolute(&n));
    return 0;
}