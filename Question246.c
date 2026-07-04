// Problem Statement 60
// Karan wants to use enum variable
// Write a program that:
// ● Uses enum variable
// ● Assigns value
// ● Prints value
// Sample Test Case 1
// Input:
// (no input)
// Output:
// 1
// Sample Test Case 2
// Input:
// (no input)
// Output:
// 1

#include <stdio.h>

enum Day {MON, TUE, WED};

int main() {
    enum Day d = TUE;
    printf("%d", d);
    return 0;
}