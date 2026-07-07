// Problem 18: Array of Structures for Employee Records 
// Title: Managing Employee Records 
// Define a structure called Employee with fields for name (string), employee ID (integer), and salary (float). Use an array of 
// structures to store details for 3 employees and display their details. 
//  Sample Test Cases 
// 1. Input: 3 
// 3 // number of employee 
// John  
// 1001  
// 50000   
// Alice 
// 1002 
// 60000   
// Bob 
// 1003 
// 55000   
// Output: 
// Employee 1: Name = John, ID = 1001, Salary = 50000   
// Employee 2: Name = Alice, ID = 1002, Salary = 60000   
// Employee 3: Name = Bob, ID = 1003, Salary = 55000

#include<stdio.h>

struct employee{
    char name[50];
    int employeeId;
    float salary;
};

int main(){
    int n;
    scanf("%d",&n);
    struct employee s[n];
    for(int i = 0; i < n; i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].employeeId);
        scanf("%f",&s[i].salary);
    }
    for(int i = 0; i < n; i++){
        printf("Employee %d: Name = %s, ID = %d, Salary = %.2f\n",i+1,s[i].name,s[i].employeeId,s[i].salary);
    }
    return 0;
}