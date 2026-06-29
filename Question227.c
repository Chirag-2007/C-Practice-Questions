// Problem Statement 41
// Simran wants to store employee details and print salary
// Write a program that:
// ● Uses structure
// ● Reads name and salary
// ● Prints salary
// Sample Test Case 1
// Input:
// Aman 5000
// Output:
// 5000
// Sample Test Case 2
// Input:
// Riya 7000
// Output:
// 7000

#include<stdio.h>

struct details{
    char name[50];
    int salary;
} details;

int main(){
    scanf("%s %d",details.name, &details.salary);
    printf("%d",details.salary);
    return 0;
}