// Problem Statement 40
// Arjun wants to swap two structures
// Write a program that:
// ● Uses structure
// ● Reads two integers
// ● Swaps using structure
// ● Prints result
// Sample Test Case 1
// Input:
// 5 7
// Output:
// 7 5
// Sample Test Case 2
// Input:
// 1 2
// Output:
// 2 1

#include<stdio.h>

struct swap{
    int n;
};

int main(){
    struct swap a, b;
    scanf("%d %d",&a.n, &b.n);
    int temp = a.n;
    a.n = b.n;
    b.n = temp;
    printf("%d %d",a.n,b.n);
    return 0;
}