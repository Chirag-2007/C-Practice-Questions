// TOPIC : Switch Case
// Problem Statement 1: Number of days in a month
// Write a C program to find the number of days in a month using a switch case statement. The number of days in February can be displayed as “28 or 29”.
// For example, in January month numbers of days are 31,
// Input Format
// The input contains the month, integer
// Output Format
// Number of days in a month 
// Sample Input
// 2
// Sample Output
// 28 or 29
// Sample Input
// 6
// Sample Output
// 30

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch (n){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30");
        break;
    case 2:
        printf("28 or 29");
        break;
    default:
        break;
    }
    return 0;
}