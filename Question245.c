// Problem Statement 59
// Neha wants to find size of enum
// Write a program that:
// ● Uses enum
// ● Prints its size
// Sample Test Case 1
// Input:
// (no input)
// Output:
// (implementation dependent)
// Sample Test Case 2
// Input:
// (no input)
// Output:
// (implementation dependent)

#include <stdio.h>

enum Test {A, B, C};

int main(){
    printf("%lu", sizeof(enum Test));
    return 0;
}