// Problem Statement 34
// Amit wants to find GCD using recursion
// Write a program that:
// ● Reads two integers
// ● Uses recursion
// ● Prints GCD
// Sample Test Case 1
// Input:
// 12 18
// Output:
// 6
// Sample Test Case 2
// Input:
// 5 7
// Output:
// 1

#include<stdio.h>

int gcd(int n, int m){
    if(m == 0){
        return n;
    }
    return gcd(m, n % m);
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    printf("%d",gcd(n,m));
    return 0;
}