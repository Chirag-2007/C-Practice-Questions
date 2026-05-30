// Q1.  Smallest of two numbers
// Write a program to find the smallest of the two numbers.
// Input
// Each test case contains 2 numbers a and b, separated by a space where a not equal to b. 
// Output
// Print the smallest number.
// Sample Input 1
// 10 20
// Sample Output 1
// 10
// Sample Input 2
// 80 70
// Sample Output 2
// 70

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n, &m);
    if(n < m){
        printf("%d",n);
    }
    else{
        printf("%d",m);
    }
    return 0;
}