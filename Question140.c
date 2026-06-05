// Q12.  Even and odd
// Write a program to find whether a number given as input is even or odd.
// Input
// Each test case will contain a number n where 1<=n<=9999.
// Output
// Print "Even" if number is even and "Odd" if number is odd.
// Sample Input
// 11
// Sample Output
// Odd

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}