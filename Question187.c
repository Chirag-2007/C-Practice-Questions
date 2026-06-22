// Q1.  Sum of the first and the last digit of a number
// Write a recursive function named sumOfDigits() that accepts an integer n (n > 9) as a parameter and returns the sum of its first and last digits.
// For example,
// sumOfDigits(1729) should return 1 + 9 = 10.
// Input Format:
// An integer n such that n > 9
// Output Format:
// Return an integer representing the sum of the first digit and the last digit of n.
// Constraint:
// 10 ≤ n ≤ 1,000,000,000
// Do not declare any global variables.
// Do not use loops (for, while, do-while).
// You must use recursion.
// Do not convert the number into a string.
// You may use only mathematical operations.
// You may declare as many primitive variables (such as int) as needed.
// You may define helper recursive functions, but they must follow the same constraints.
// Sample Input:
// 1729
// Sample Output:
// 10
// Explanation:
// First digit = 1
// Last digit = 9
// Sum = 1 + 9 = 10

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num = n;
    int last = n % 10;
    int count = 0;
    while(num > 0){
        count++;
        num = num / 10;
    }
    int val = 1;
    for(int i = 1; i <= count - 1; i++){
        val = val * 10; 
    }
    int first = n / val;
    int total = first + last;
    printf("%d",total);
    return 0;
}