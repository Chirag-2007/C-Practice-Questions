// Q10.  Evaluate Recurrence relation
// Complete the given function to implement a mathematical recurrence relation T(k).
// A recurrence relation T(n) is defined for all n≥0 as:
// T(0) = 1
// T(n) = T(n−1) + 2 × n, for n ≥1
// You are given an integer k. Your task is to compute and return the value of T(k).
// The solution must use recursion.
// Input Format
// First line contains an integer n, number of test cases.
// Next n lines each contain one integer k.
// Output Format
// Function should return the integer result of T(k) for input k.
// Constraints
// Number of test cases (n): 1 <= n ≤ 10000 
// Value of k: 0 ≤ k ≤ 1000
// Sample Input
// 2
// 1
// 2
// Sample output
// 3
// 7
// Explanation
// For k=1:
// T(1) = T(0) + 2*1 = T(0) + 2
// Since T(0) = 1, result is 1 + 2 = 3.
// For k=2
// T(2) = T(1) + 2*2 = T(1) + 4
// T(1) = T(0) + 2*1 = T(0) + 2
// Since T(0) = 1, result is (1 + 2) + 4 = 7.

#include<stdio.h>

int T(int n){
    if(n == 0){
        return 1;
    }
    return T(n - 1) + 2 * n;
}

int main(){
    int n;
    scanf("%d",&n);
    while(n > 0){
        int k;
        scanf("%d",&k);
        printf("%d\n",T(k));
        n--;
    }
    return 0;
}