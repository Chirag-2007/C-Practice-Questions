// Problem Statement 37
// Riya wants to add two complex numbers using structure
// Write a program that:
// ● Defines a structure
// ● Reads two complex numbers
// ● Adds them
// ● Prints result
// Sample Test Case 1
// Input:
// 1 2
// 3 4
// Output:
// 4 6
// Sample Test Case 2
// Input:
// 5 6
// 1 2
// Output:
// 6 8

#include<stdio.h>

struct complex{
    int real;
    int imaginary;
};

int main(){
    struct complex c1, c2;
    scanf("%d %d",&c1.real, &c1.imaginary);
    scanf("%d %d",&c2.real, &c2.imaginary);
    printf("%d %d",c1.real + c2.real, c1.imaginary + c2.imaginary);
    return 0;
}