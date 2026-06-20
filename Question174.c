// Q10.  Find sum of main diagonal of matrix
// A school is preparing a seating arrangement for an examination hall. The classroom seats are organized in a square grid, and the seats along the main diagonal are reserved
// for special monitoring staff. To calculate the total seat numbers assigned to these staff members, the system must add the values written on the diagonal seats of the
// seating chart (matrix). Your task is to help the school software determine the sum of the seat numbers located on the main diagonal of the square arrangement.
// Task:
// Write a program to read a square matrix and find the sum of its main diagonal.
// Note: Maximum size of matrix will be 10x10 in this question.
// Input Format
// First line contains a integers m denoting the rows & columns of square matrix.
// Next m lines: Each line contains m space-separated integers describing the matrix in row-major order.
// Output Format
// Print the sum of main diagonal of the matrix.
// Sample Input
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output
// 15
// Explanation
// Main diagonal elements are 1, 5 and 9. So sum is 1+5+9=15.

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
        total += arr[i][i];
    }
    printf("%d",total);
    return 0;
}