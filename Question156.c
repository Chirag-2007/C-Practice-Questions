// Q1.  Rotate a 2-D array by 90 degrees
// Write a program to rotate a given square matrix of size N×N by 90 degrees in the clockwise direction.
//  Input Format
// First line of input will contain a number T = no. of test cases. 
// Each test case will contain one line with number N (N*N is the size of the array). Next N lines will each contain N integers separated by space.
// Output Format
// For each test case, the output must adhere to the following strict formatting rules:
// Print the rotated matrix in N lines, with each line representing one row.
// Within each row, elements must be separated by exactly one space.
// There must be no space after the last element of any row.
// Print one extra blank line after the complete output of each test case.
// Constraints
// 1 <= T <= 10
// 1 <= N <= 50
// 0 <= arr[i][j] <= 100
// Sample Input
// 3
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 2
// 2 4
// 1 3
// 1
// 14
// Sample Output
// 7 4 1
// 8 5 2
// 9 6 3
// 1 2
// 3 4
// 14

#include<stdio.h>
void rotate(int n, int arr[n][n]){
    int transpose[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

int main(){
   int m;
   scanf("%d",&m);
   while(m > 0){
        int n;
        scanf("%d",&n);
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        rotate(n, arr);
        m--;
   }
    return 0;
}