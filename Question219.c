// Problem Statement 33
// Priya wants to check even or odd using recursion
// Write a program that:
// ● Reads an integer
// ● Uses recursion
// ● Prints 1 if even else 0
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

int check_num(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 0;
    }
    return check_num(n - 2);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",check_num(n));
    return 0;
}