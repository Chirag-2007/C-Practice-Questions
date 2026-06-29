// Problem Statement 36
// Aman wants to store and display student details using structure
// Write a program that:
// ● Defines a structure with name and marks
// ● Reads values
// ● Prints details
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
    scanf(" %s %d",s.name, &s.age);
    printf("%s %d",s.name,s.age);
    return 0;
}