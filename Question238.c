// Problem Statement 52
// Karan wants to demonstrate structure padding
// Write a program that:
// ● Uses structure with char and int
// ● Prints size of structure
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

struct Data{
    char c;
    int i;
};

int main(){
    printf("%lu", sizeof(struct Data));
    return 0;
}