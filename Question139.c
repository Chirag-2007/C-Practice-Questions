// Q11.  Number is positive, negative or zero
// Write a program to input any number from user and check whether the given number is positive, negative or zero.
// Input Format
// Each test case contains a number.
// Output Format
// Print positive or negative or zero based on condition.
// Sample Input
// 10
// Sample Output
// positive

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n > 0){
        printf("positive");
    }
    else if(n < 0){
        printf("negative");
    }
    else{
        printf("zero");
    }
    return 0;
}