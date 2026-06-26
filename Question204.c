// Problem Statement 18
// Rahul wants to calculate product using function.
// Write a program that:
// ● Reads two integers
// ● Uses a function with pointers
// ● Returns product
// Sample Test Case 1
// Input:
// 5 7
// Output:
// 35
// Sample Test Case 2
// Input:
// -3 3
// Output:
// -9

#include<stdio.h>

int prd(int *a, int *b){
    return *a * *b;
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    printf("%d",prd(&n,&m));
    return 0;
}