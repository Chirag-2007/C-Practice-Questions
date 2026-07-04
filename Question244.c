// Problem Statement 58
// Rahul wants to use enum in switch case
// Write a program that:
// ● Uses enum
// ● Takes integer input
// ● Prints corresponding value
// Sample Test Case 1
// Input:
// 0
// Output:
// MON
// Sample Test Case 2
// Input:
// 1
// Output:
// TUE

#include<stdio.h>

enum Day {MON,TUE,WED};

int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case MON:
            printf("MON");
            break;
        case TUE:
            printf("TUE");
            break;
        case WED:
            printf("WED");
            break;
        default:
            printf("INVALID");
    }
    return 0;
}