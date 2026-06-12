// Q9.  Gross salary of an employee
// Write a program to calculate the gross salary of an employee. Basic salary will be provided as input and HRA is 10% of basic salary and DA is
// 20% of the basic salary.
// Gross Salary = Basic Salary + HRA + DA
// Input Format
// Each test case will contains a single value n (basic salary) where n >=100.
// Output Format
// For each input case, calculate and print the gross salary.
// Sample Input
// 5000
// Sample Output
// 6500
// Explanation
// HRA = 10% of 5000 = 500
// DA = 20% of 5000 = 1000
// Gross Salary = 5000 + 500 + 1000 = 6500

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int HRA = n * 10 / 100;
    int DA = n * 20 / 100;
    int salary = n + HRA + DA;
    printf("%d",salary);
    return 0;
}