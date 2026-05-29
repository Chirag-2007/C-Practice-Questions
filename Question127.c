// Numeric PIN Entry System (Static)
// Problem Statement
// A banking system allows a user to enter their 4-digit PIN a maximum of three times before locking the account. If the user enters an incorrect PIN more than three times, the system should deny further attempts.
// Write a C program that takes a correct numeric PIN as input and then accepts user attempts. If the correct PIN is entered at any point, print "Correct" and terminate. If the user enters the wrong PIN three times, print "Account Locked" and deny further attempts.
// Input Format
// The first line contains an integer representing the correct 4-digit PIN.
// The next lines contain integers representing the user's PIN attempts.
// Output Format
// If the user enters the correct PIN, print "Correct" and terminate.
// If the user enters the wrong PIN three times, print "Account Locked" and terminate.
// Sample Test Case 1
// Input:
// 1234  
// 1111  
// 2222  
// 1234  
// Output:
// Incorrect PIN  
// Incorrect PIN  
// Correct
// Sample Test Case 2
// Input:
// 5678  
// 1234  
// 9876  
// 1111  
// Output:
// Incorrect PIN  
// Incorrect PIN  
// Account Locked  

#include<stdio.h>
int main(){
    int pin, attempt;
    scanf("%d", &pin);
    for(int i = 1; i <= 3; i++){
        scanf("%d", &attempt);
        if(attempt == pin){
            printf("Correct\n");
            return 0;
        }
        else{
            if(i == 3){
                printf("Account Locked\n");
            }
            else{
                printf("Incorrect PIN\n");
            }
        }
    }
    return 0;
}