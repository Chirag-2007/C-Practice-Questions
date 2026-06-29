// Problem Statement 39
// Neha wants to calculate total marks using structure
// Write a program that:
// ● Uses structure
// ● Reads marks of 3 subjects
// ● Prints total
// Sample Test Case 1
// Input:
// 10 20 30
// Output:
// 60
// Sample Test Case 2
// Input:
// 5 5 5
// Output:
// 15

#include<stdio.h>

struct total{
    int marks;
};

int main(){
    struct total s[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&s[i].marks);
    }
    int total = 0;
    for(int i = 0; i < 3; i++){
        total += s[i].marks;
    }
    printf("%d",total);
    return 0;
}