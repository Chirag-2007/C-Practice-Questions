// Problem Statement 29
// Arjun wants to find power using recursion
// Write a program that:
// ● Reads two integers (base and exponent)
// ● Uses recursion
// ● Prints result
// Sample Test Case 1
// Input:
// 2 3
// Output:
// 8
// Sample Test Case 2
// Input:
// 5 0
// Output:
// 1

#include<stdio.h>

int power(int base, int pow){
    if(pow == 0){
        return 1;
    }
    return base * power(base, pow - 1);
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    int ans = power(n,m);
    printf("%d",ans);
    return 0;
}