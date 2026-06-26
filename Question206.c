// Problem Statement 20
// Arjun wants to check if a number is even using function.
// Write a program that:
// ● Reads an integer
// ● Uses a function with pointer
// ● Returns 1 if even else 0
// Sample Test Case 1
// Input:
// 4
// Output:
// 1
// Sample Test Case 2
// Input:
// 7
// Output:
// 0

#include<stdio.h>

int check_even(int* n){
    if(*n % 2 == 0){
        return 1;
    }
    return 0;
}
    
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",check_even(&n));
    return 0;
}