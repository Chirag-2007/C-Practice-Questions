// Problem Statement 47
// Riya wants to modify structure using pointer to pointer
// Write a program that:
// ● Uses structure with integer
// ● Uses pointer to pointer
// ● Modifies value
// ● Prints updated value
// Sample Test Case 1
// Input:
// 5
// Output:
// 10
// Sample Test Case 2
// Input:
// 3
// Output:
// 6

#include<stdio.h>

struct val{
    int n;
};

void modify(struct val **p){
    (**p).n *= 2;
};

int main(){
    struct val s;
    scanf("%d",&s.n);
    struct val *ptr = &s;
    modify(&ptr);
    printf("%d",s.n);
    return 0;
}