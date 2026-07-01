// Problem Statement 43
// Ravi wants to find average using structure
// Write a program that:
// ● Uses structure
// ● Reads 3 marks
// ● Prints average
// Sample Test Case 1
// Input:
// 10 20 30
// Output:
// 20
// Sample Test Case 2
// Input:
// 5 5 5
// Output:
// 5

#include<stdio.h>

struct details{
    int marks;
};

int main(){
    struct details s[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&s[i].marks);
    }
    int total = 0;
    for(int i = 0; i < 3; i++){
        total += s[i].marks;
    }
    int avg = total / 3;
    printf("%d",avg);
    return 0;
}