// Q8.  Equal or not?
// Write a program to check whether two number are equal or not.
// Input
// Each test case contains 2 numbers, separated by a space.
// Output
// Print "Equal" if numbers are equal and "Not Equal" otherwise.
// Sample Input 1
// 10 20
// Sample Output 1
// Not Equal
// Sample Input 2
// 10 10
// Sample Output 2
// Equal 

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n == m){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}