// Q9.  Sum of all the digits of a number
// Write a program to find the sum of all the digits of a number.
// Input Format:
// The first line contains an integer  T, representing the number of test cases.
// Each of the following  T  lines contains a single integer  n
// Output Format:
// For each test case, print the sum of the digits of  n on a new line.
// Sample Input:
// 4
// 1234
// 456
// 12
// 1
// Sample Output:
// 10
// 15
// 3
// 1

#include<stdio.h>

int sumNumber(int n){
    int total = 0;
    while(n > 0){
        int last = n % 10;
        total += last;
        n = n / 10;
    }
    return total;
}

int main(){
    int n;
    scanf("%d",&n);
    while(n > 0){
        int x;
        scanf("%d",&x);
        int res = sumNumber(x);
        printf("%d",res);
        n--;
    }
    return 0;
}