// Q2.  Sum of the first and the last digit of a 4 digit number
// Write a program that reads a 4-digit positive integer and calculates the sum of its first (thousands place) digit and its last (units place) digit.
// The program should extract the required digits using arithmetic operations and then display their sum.
// Input
// Each test case contains a single integer n such that
// 1000 ≤ n ≤ 9999.
// Output
// For each input case, print a single integer representing the sum of the first and last digit of the given number.
// Sample Input
// 1234
// Sample Output
// 5

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int val = n;
    int count = 0;
    while(n > 0){
        count++;
        n = n / 10;
    }
    int arr[count];
    int i = 0;
    while(val > 0){
        int dig = val % 10;
        arr[i++] = dig;
        val = val / 10;
    }
    int total = arr[0] + arr[count - 1];
    printf("%d",total);
    return 0;
}