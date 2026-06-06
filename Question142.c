// Q14.  Create Simple calculator of four operations using switch case
// Write a program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch
// case. The calculator should input two numbers and an operator from user. It should perform operation according to the operator entered and
// must take input in given format.
// Input Format:
// <number 1> <operator> <number 2>
// Output Format
// Print the output of the expression given up to 2 decimal points.
// Sample Input
// 10 + 20
// Sample Output
// 30.00

#include<stdio.h>
int main(){
    float n,m;
    char ch;
    scanf("%f %c %f",&n,&ch,&m);
    switch(ch){
        case '+':
            printf("%.2f",n + m);
            break;
        case '-':
            printf("%.2f",n - m);
            break;
        case '*':
            printf("%.2f",n * m);
            break;
        case '/':
            printf("%.2f",n / m);
            break;
    }
    return 0;
}