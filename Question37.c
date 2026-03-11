// Problem Statement : Write a program to add or subtract the numbers based on the condition that if first number is greater than second number then subtract second number from first number otherwise add two numbers
// Input Format
// The first line of the input contains first number
// The second line of the input contains second number
// Output Format
// Print the required result accordingly.
// Sample Input
// 6
// 5
// Sample Output
// 1
// Sample Input
// 2
// 2
// Sample Output
// 4

#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int val;
    if(n1 > n2){
        val = n1 - n2;
    }
    else{
        val = n1 + n2;
    }
    printf("%d",val);
    return 0;
}