// Q2.  Column Sum
// You are building a tool to analyze tabular data stored in a 2D matrix. Each row represents a different record or time period, and each column contains specific values. The
// user needs to calculate the sum of the elements in a selected column.
// Write a program of find sum of all elements of nth column of a matrix.
// Input Format:
// 1st line: Number of rows (an integer R)
// 2nd line: Number of columns (an integer C)
// Next R lines: Each line contains C space-separated integers (elements of each row)
// Final line: Column index (0-based) for which the sum is to be calculated
// Output Format:
// For each test case, print the sum of given column in the array.
// Sample Input:
// 2//Number of rows
// 3//Number of columns 
// 1 3 5 //1st row elements
// 3 4 10//2nd row elements
// 2 // Element whose Column sum is to be calculated
// Sample Output:
// 15 //sum of all elements in 2nd column

#include<stdio.h>
int main(){
    int  r, c;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int total = 0;
    for(int i = 0; i < r; i++){
        total += arr[i][x];
    }
    printf("%d",total);
    return 0;
}