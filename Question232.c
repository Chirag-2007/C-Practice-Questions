// Problem Statement 46
// Aman wants to understand memory sharing in union using pointer
// Write a program that:
// ● Uses a union with int and float
// ● Assigns value to int
// ● Accesses float using pointer
// ● Prints float value
// Sample Test Case 1
// Input:
// 5
// Output:
// (garbage/implementation dependent)
// Sample Test Case 2
// Input:
// 10
// Output:
// (garbage/implementation dependent)

#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;
    scanf("%d", &d.i);
    float *ptr = (float*)&d;
    printf("%f", *ptr);
    return 0;
}
