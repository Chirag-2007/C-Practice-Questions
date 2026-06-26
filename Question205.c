// Problem Statement 19
// Neha wants to swap two numbers using function.
// Write a program that:
// ● Reads two integers
// ● Uses a function with pointers
// ● Swaps values
// ● Prints swapped values
// Sample Test Case 1
// Input:
// 5 7
// Output:
// 7 5
// Sample Test Case 2
// Input:
// -3 3
// Output:
// 3 -3

#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    swap(&n,&m);
    printf("%d %d",n,m);
    return 0;
}