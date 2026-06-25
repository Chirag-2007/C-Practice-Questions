// Problem Statement 16
// Riya wants to find minimum using function.
// Write a program that:
// ● Reads two integers
// ● Uses a function with pointers
// ● Returns minimum
// Sample Test Case 1
// Input:
// 8 12
// Output:
// 8
// Sample Test Case 2
// Input:
// -5 -2
// Output:
// -5

#include<stdio.h>

int check_min(int *a, int *b){
    int min = 0;
    if(*a < *b){
        min = *a;
    }
    else{
        min = *b;
    }
    return min;
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    int val = check_min(&n,&m);
    printf("%d",val);
    return 0;
}