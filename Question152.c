// Q12.  Voting Eligibility Checker
// Write a program to determine a person's voting eligibility based on their age.
// The program should classify the input into one of three categories based on the following rules:
// 1. Eligible to Vote: Age is between 18 and 125 (inclusive).
// 2. Not Eligible to Vote: Age is between 0 and 17 (inclusive).
// 3. Invalid Age: Age is less than 0 or greater than 125.
// Input Format
// A single integer representing the age
// Output Format
// Print "Eligible to Vote" if the age is between 18 and 125 (inclusive).
// Print "Not Eligible to Vote" if the age is between 0 and 17 (inclusive).
// Print "Invalid Age" if the age is less than 0 or greater than 125.
// Constraints
// −500≤age≤500
// Sample Test Case
// Input:
// 20
// Output:
// Eligible to Vote

#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age < 0 || age > 125){
        printf("Invalid Age");
    }
    else{
        if(age >= 18 && age <= 125){
            printf("Eligible to Vote");
        }
        else{
            printf("Not Eligible to Vote");
        }
    }
    return 0;
}