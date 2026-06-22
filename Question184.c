// Q11.  power(base, exp)
// Write a recursive function power that accepts two integers representing a base and an non-negative exponent and returns the base raised to that non-negative exponent. For example, the call of power(3,
// 4) should return 81 . If the exponent passed is negative, throw an exception or print error message.
// Note: If the exponent is negative, the program must throw an exception (for languages like C++/Java/Python) or print this exact error message: Negative exponent not allowed (for C language).
// Do not use loops or auxiliary data structures; Solve the problem recursively.
// Also do not use the provided in-built library power function in your solution.
// Input Format
// The first line contains a single integer T, number of test cases.
// Next T lines contains two space-separated integers, base and exp for each test case.
// Output Format
// For each test case, the result of power(base, exp) will be returned by function and printed from main or error message will be printed from function itself.
// Each result is printed on a new line.
// If the exponent is negative, you only have to print an error message "Negative exponent not allowed" (for C language) or throw an exception (depending on languages like C++/Java/Python).
// Constraints
// 1 <= T <= 10^5-10^5 <= base <= 10^5
// 0 <= exp <= 10^5
// Sample Input
// 3
// 3 4
// 2 5
// 5 0
// Sample Output
// 81
// 32
// 1
// Explanation
// For power(3,4): = 81
// power(2,5) = 32
// power(5,0) = 1
// 3^4 = 3 * 3 * 3 * 3 = 81.
// For power(5, 0):
// By mathematics definition, any non-zero base raised to the power of 0 results in 1. So output is 1.

#include<stdio.h>

int power(int base, int pow){
    if(pow == 0){
        return 1;
    }
    return base * power(base, pow - 1);
}

int main(){
    int n;
    scanf("%d",&n);
    while(n > 0){
        int base, pow;
        scanf("%d %d",&base,&pow);
        if(pow < 0){
            printf("Negative exponent not allowed");
        }
        else{
            int result = power(base, pow);
            printf("%d",result);
        }
        n--;
    }
    return 0;
}