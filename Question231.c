// Problem Statement 45
// Amit wants to compare two structures
// Write a program that:
// ● Uses structure
// ● Reads two values
// ● Prints 1 if equal else 0
// Sample Test Case 1
// Input:
// 5 5
// Output:
// 1
// Sample Test Case 2
// Input:
// 5 6
// Output:
// 0

#include<stdio.h>

struct val{
    int n;
};

int main(){
    struct val num1,num2;
    scanf("%d %d",&num1.n,&num2.n);
    if(num1.n == num2.n){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}