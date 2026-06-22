// Q12.  Sum of All Digits (Recursion)
// Write a recursive function sumOfDigits() that accepts an integer as a parameter and returns the sum of its digits. The function must handle both positive and negative integers according to the specific
// rules below.
// Rules:
// If n is positive, return the sum of its digits.
// Example: 1729 → 1 + 7 + 2 + 9 = 19
// If n is negative, return the negative of the digit sum of its absolute value.
// Example: -1729 → -(1 + 7 + 2 + 9) = -19
// Note:
// Use recursion only
// Do not use loops
// Do not use string conversion
// Input Format:
// The first line contains an integer T, the number of test cases.
// Each of the next T lines contains a single integer n.
// Output Format:
// For each test case, print the sum of the digits on a new line.
// Constraints:
// 1 ≤ T ≤ 100-10^9 ≤ n ≤ 10^9
// Sample Input:
// 3
// 1729-1729
// 502
// Sample Output
// 19-19
// 7
// Explanation
// For a positive number like 1729, the function should return 1 + 7 + 2 + 9 = 19.
// For a negative number like -1729, the function should return the negative of the sum of its absolute digits, which is -19.
// For a positive number like 502, the function should return 5 + 0 + 2 = 7.

#include<stdio.h>
#include<stdlib.h>

int sum(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sum(n / 10);
}

int main(){
    int n;
    scanf("%d",&n);
    while(n > 0){
        int num;
        scanf("%d",&num);
        int val = 1;
        if(num < 0){
            val = -1;
        }
        int abs_val = abs(num);
        int result = sum(abs_val);
        printf("%d",val*result);
        n--;
    }
    return 0;
}