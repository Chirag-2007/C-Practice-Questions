// Q15.  Count number of digits in a number
// A telecom company is testing its system before storing customer numbers in its database. To ensure proper validation, the system must first determine how long the
// number is by counting how many digits it contains. Given a number n, your task is to help the system calculate and print the total number of digits present in it.
// Task:
// Write a program to print the number of digits in a given number.
// Output will be 1 if input is 0.
// Input Format
// First line contains a number n.
// Output Format
// Print the total number of digits in n.
// Sample Input:
// 756
// Sample Output:
// 3

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    if(n == 0){
        count++;
    }
    while(n > 0){
        int last = n % 10;
        count++;
        n = n / 10;
    }
    printf("%d",count);
    return 0;
}