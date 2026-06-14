// Q11.  Driver Insurance Eligibility Checker
// A company determines driver insurance eligibility based on three criteria:
// 1. All married drivers are insured.
// 2. Unmarried males are insured only if they are older than 30
// 3. Unmarried females are insured only if they are older than 25.
// Write a program to check if a driver qualifies for insurance
// Input Format
// A character for Marital Status (M for Married, S for Single).
// A character for Gender (M for Male, F for Female).
// An integer for Age
// Output Format
// Print "Driver is Insured" if they meet the criteria.
// Print "Driver is Not Insured" if they do not meet the criteria.
// Print "Invalid Input" for unrecognized status or gender characters.
// Constraints
// 1≤age≤100
// Status 
// ∈{ʹMʹ,ʹSʹ,ʹmʹ,ʹsʹ} where 'M'/'m' stands for married and 'S'/'s' stands for single
// Gender 
// ∈{ʹMʹ,ʹFʹ,ʹmʹ,ʹfʹ} where 'M'/'m' stands for male and 'F'/'f' stands for female
// Sample Test Case
// Input:
// S, M, 35
// Output:
// Driver is Insured

#include<stdio.h>
int main(){
    char status;
    char gender;
    int age;
    scanf(" %c , %c , %d", &status, &gender, &age);
    if((status == 'M' || status == 'S' || status == 'm' || status == 's') && (gender == 'M' || gender == 'F' || gender == 'm' || gender == 'f')){
        if(status == 'M' || status == 'm'){
            printf("Driver is Insured");
        }
        else if((status == 'S' || status == 's') && (gender == 'M' || gender == 'm') && age > 30){
            printf("Driver is Insured");
        }
        else if((status == 'S' || status == 's') && (gender == 'F' || gender == 'f') && age > 25){
            printf("Driver is Insured");
        }
        else{
            printf("Driver is Not Insured");
        }
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}