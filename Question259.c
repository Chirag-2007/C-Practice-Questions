// Problem 19: Structure with Array Members 
// Title: Storing Marks for Multiple Subjects 
// Create a structure called StudentMarks that stores the name of the student (string) and an array of marks for 3 subjects (integers). 
// Write a program to take input and display the total marks for all subjects. 
//  Sample Test Cases 
// 1. Input: 
// Alice   
// 85 
// 90 
// 88   
// Output: 263 
// 2. Input: 
// John   
// 70 
// 75 
// 80   
// Output:225

#include<stdio.h>

struct studentMarks{
    char name[50];
    int marks[3];
};

int main(){
    struct studentMarks s;
    scanf("%s",s.name);
    for(int i = 0; i < 3; i++){
        scanf("%d",&s.marks[i]);
    }
    int total = 0;
    for(int i = 0; i < 3; i++){
        total += s.marks[i];
    }
    printf("%d",total);
    return 0;
}