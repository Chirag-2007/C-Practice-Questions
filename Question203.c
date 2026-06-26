// Problem Statement 17
// Aman wants to calculate sum using function.
// Write a program that:
// ● Reads two integers
// ● Uses a function with pointers
// ● Returns sum
// Sample Test Case 1
// Input:
// 5 7
// Output:
// 12
// Sample Test Case 2
// Input:
// -3 3
// Output:
// 0

#include<stdio.h>

int add(int *a, int *b){
    return *a + *b;
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    printf("%d",add(&n,&m));
    return 0;
}