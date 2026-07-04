// Problem Statement 57
// Riya wants to assign custom values in enum
// Write a program that:
// ● Defines enum with custom values
// ● Prints them
// Sample Test Case 1
// Input:
// (no input)
// Output:
// 10 20 21
// Sample Test Case 2
// Input:
// (no input)
// Output:
// 10 20 21

#include <stdio.h>

enum Num {A=10, B=20, C};

int main(){
    printf("%d %d %d", A, B, C);
    return 0;
}