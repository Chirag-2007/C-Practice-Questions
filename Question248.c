// Problem Statement 62
// Riya wants to understand static variable behavior
// Write a program that:
// ● Uses static variable
// ● Calls function twice
// ● Prints values
// Sample Test Case 1
// Input:
// (no input)
// Output:
// 1 2
// Sample Test Case 2
// Input:
// (no input)
// Output:
// 1 2

#include <stdio.h>

void func() {
    static int x = 0;
    x++;
    printf("%d ", x);
}

int main() {
    func();
    func();
    return 0;
}