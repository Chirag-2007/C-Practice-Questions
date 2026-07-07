// Problem 20: Searching Employee Records Using Array of Structures 
// Title: Search for an Employee by ID 
// Define a structure Employee with name (string), employee ID (integer), and salary (float). Store details for 5 employees in an 
// array of structures. Allow the user to enter an employee ID and search for the corresponding employee’s details i.e. Name and 
// salary of that employee. If not found then print “Employee does not exist in the record” 
// Note: Structure of employee has been initialized in this program.  
//         {"John", 1001, 50000}, 
//         {"Alice", 1002, 60000}, 
//         {"Bob", 1003, 55000}, 
//         {"David", 1004, 47000}, 
//         {"Eve", 1005, 52000} 
//  Sample Test Cases 
// 1. Input: 
// 1002 // Enter Employee ID to search   
// Output: 
// Alice 
// 60000.00   
// 2. Input: 
// 1005   
// Output: 
// Employee does not exist in the record 

#include<stdio.h>
#include <string.h>

struct Employee{
    char name[50]; 
    int employeeID; 
    float salary; 
};

int main(){
    struct Employee employees[5] = { 
        {"John", 1001, 50000}, 
        {"Alice", 1002, 60000}, 
        {"Bob", 1003, 55000}, 
        {"David", 1004, 47000}, 
        {"Eve", 1005, 52000} 
    };

    int id;
    scanf("%d",&id);
    int found = 0;
    for(int i = 0; i < 5; i++){
        if(employees[i].employeeID == id){
            printf("%s,%.2f\n", employees[i].name, employees[i].salary);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Employee does not exist in the record ");
    }
    return 0;
}