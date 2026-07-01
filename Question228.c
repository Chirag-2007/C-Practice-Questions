// Problem Statement 42
// Karan wants to demonstrate union storing integer and float
// Write a program that:
// ● Uses union
// ● Reads integer and float
// ● Prints both
// Sample Test Case 1
// Input:
// 5 2.5
// Output:
// 5 2.5
// Sample Test Case 2
// Input:
// 10 3.5
// Output:
// 10 3.5

#include<stdio.h>

union value{
    int n1;
    float n2;
};

int main(){
    union value num;
    scanf("%d",&num.n1);
    printf("%d ",num.n1);
    scanf("%f",&num.n2);
    printf("%.1f",num.n2);
    return 0;
}