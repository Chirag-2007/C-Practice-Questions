// Q11.  Find transpose of a matrix
// The transpose of a matrix is formed by interchanging its rows and columns. In other words, the element at position (i, j) in the original matrix becomes the element at
// position (j, i) in the transpose matrix.
// You are required to write a program to:
// 1. Read a matrix of size m × n.
// 2. Compute its transpose.
// 3. Print the transpose matrix.
// Note:
// The maximum size of the matrix will be 10 × 10.
// Input Format:
// First line contains 2 integers m, n denoting the rows & columns of matrix.
// Next m lines contain n integers separated by space .
// Output Format:
// Print the transpose of the matrix. 
// The output consists of  𝑛 lines (where 𝑛 was the original number of columns).
// Each line contains 𝑚 space-separated integers (where  𝑚 was the original number of rows).Prints a trailing space at the end of every line.
// Each line ends with a newline character.
// Constraints:
// 1 ≤ m, n ≤ 10
// Matrix elements are integers.
// Sample Input
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output
// 1 4 7 
// 2 5 8 
// 3 6 9

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int transpose[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}