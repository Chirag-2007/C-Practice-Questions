// Problem Statement 44
// Priya wants to display structure using pointer
// Write a program that:
// ● Uses structure
// ● Uses pointer to structure
// ● Prints data
// Sample Test Case 1
// Input:
// Aman 90
// Output:
// Aman 90
// Sample Test Case 2
// Input:
// Riya 85
// Output:
// Riya 85

#include<stdio.h>

struct student{
    char name[50];
    int age;
};

int main(){
    struct student s;
    struct student *ptr = &s;
    scanf("%s %d",ptr->name,&ptr->age);
    printf("%s %d",ptr->name,ptr->age);
    return 0;
}