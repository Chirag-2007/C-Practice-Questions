// Q3.  Pyramid - 3
// A digital castle gate displays a security pattern made of stars * and numbers. For a given number n, the system prints a pyramid of n rows where stars appear first
// followed by numbers starting from 1. With every next row, stars decrease by one and numbers increase by one. The last row contains only numbers.
// Task:
// Write a program to print the n lines of pyramid.
// Example:
// For n = 5:
// ****1
// ***12
// **123
// *1234
// 12345
// Input
// Each test case will contain a number n where n >=1.
// Output
// Print the first n lines of the above pyramid
// Sample Input
// 3
// Sample Output
// **1
// *12
// 123
// Important Note: Don't print spaces at the end of the row

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sp = n - 1;
    int st = 1;
    for(int i = 0; i < n; i++){
        for(int k = 1; k <= sp; k++){
            printf("*");
        }
        for(int j = 1; j <= st; j++){
            printf("%d",j);
        }
        sp--;
        st++;
        printf("\n");
    }
    return 0;
}