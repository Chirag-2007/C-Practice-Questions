// Q4.  Row Sum
// You are building a tool to analyze tabular data stored in a 2D matrix. Each row represents a different record or time period, and each column contains specific values.
// Write a program to find the sum of all elements of the kth row of a matrix.
// Input Format:
// First line: Two integers R and C (number of rows and columns).
// Next R lines: Each line contains C space-separated integers.
// Last line: An integer K (0-based row index).
// Output Format:
// Print a single integer — the sum of all elements in the Kth row.
// Constraints:
// 1 ≤ R, C ≤ 100
// 0 ≤ K < R
// Matrix elements are integers
// Sample Input:
// 2 3
// 1 3 5
// 3 4 10
// 1
// Sample Output:
// 17
// Explanation:
// Row index = 1
// Row elements:
// 3 4 10
// Sum:3 + 4 + 10 = 17

#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int total = 0;
    for(int j = 0; j < c; j++){
        total = total + arr[x][j];
    }
    printf("%d",total);
    return 0;
}