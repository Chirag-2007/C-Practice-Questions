// Q8.  a raised to the power of b
// Write a program to find the value of one number raised to the power of another.
// Input Format:
// Each test case will contains two positive non-zero integers a and b.
// Output Format:
// For each input case, calculate and print value of a raised to the power of b.
// Sample Input:
// 2
// 3
// Sample Output:
// 8

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d",&n);
    scanf("%d",&m);
    int pow = 1;
    for(int i = 1; i <= m; i++){
        pow = pow * n;
    }
    printf("%d",pow);
    return 0;
}