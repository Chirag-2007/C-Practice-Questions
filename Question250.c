// Problem Statement 64
// Neha wants to demonstrate extern variable
// Write a program that:
// ● Uses extern variable
// ● Prints value
// Sample Test Case 1
// Input:
// (no input)
// Output:
// 10
// Sample Test Case 2
// Input:
// (no input)
// Output:
// 10

#include <stdio.h>

int x = 10;

int main() {
    extern int x;
    printf("%d", x);
    return 0;
}