// Q13.  Given month number print days in month
// Write a program to input month number(1-12) and print the number of days in that month.
// Note: Ignore leap year logic.
// Input Format
// Each test case contains an integer denoting month.
// Output Format
// Print number of days for given month.
// Sample Input
// 3
// Sample Output
// 31

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
        printf("%d",31);
    }
    else if(n == 2){
        printf("%d",28);
    }
    else{
        printf("%d",30);
    }
    return 0;
}