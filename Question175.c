// Q11.  Find sum of minor diagonal of matrix
// Write a program to read a square matrix and compute the sum of its minor diagonal elements. In a square matrix of order m × m, the minor diagonal (also called the
// secondary diagonal) consists of elements starting from the top-right corner and ending at the bottom-left corner of the matrix.
// Your task is to calculate and print the sum of these minor diagonal elements.
// Note: Maximum size of matrix will be 10x10 in this question.
// Input Format:
// First line contains an integer m — the order of the square matrix
// Next m lines: Each line contains m space-separated integers describing the matrix in row-major order.
// Output Format:
// Print a single integer — the sum of the minor diagonal elements.
// Sample Input
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output
// 15
// Explanation
// Minor diagonal elements are:
//   3 (top-right corner)
//   5 (center element)
//   7 (bottom-left corner)
// Sum = 3 + 5 + 7 = 15

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1){
                total += arr[i][j];
            }
        }
    }
    printf("%d",total);
    return 0;
}