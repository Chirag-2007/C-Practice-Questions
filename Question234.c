// Problem Statement 48
// Rahul wants to observe union overwrite behavior
// Write a program that:
// ● Uses union with int and char array
// ● Assigns integer
// ● Prints char array
// Sample Test Case 1
// Input:
// 16909060
// Output:
// (binary dependent characters)
// Sample Test Case 2
// Input:
// 1
// Output:
// (binary dependent characters)

#include <stdio.h>

union Data {
    int i;
    char c[4];
};

int main() {
    union Data d;
    scanf("%d", &d.i);
    for (int i = 0; i < 4; i++)
        printf("%d ", d.c[i]);
    return 0;
}