// Problem Statement 55
// Amit wants to demonstrate union size
// Write a program that:
// ● Uses union
// ● Prints size
// Sample Test Case 1
// Input:
// (no input)
// Output:
// (max member size)
// Sample Test Case 2
// Input:
// (no input)
// Output:
// (max member size)
// Hidden Test Cases
// Test Case | Input | Output

#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    printf("%lu", sizeof(union Data));
    return 0;
}