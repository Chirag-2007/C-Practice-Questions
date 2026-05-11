// Write a program in C to calculate the sum of every row and the sum of every column in a 2D matrix.
// Description / Explanation:

// You will be given a 2D matrix (array) of size R × C.

// Your task is to:

// Take input of the matrix from the user.
// Calculate the sum of each row of the matrix.
// Calculate the sum of each column of the matrix.
// Print the sum of each row and each column separately.

// Input Format:

// First line: an integer R (number of rows)
// Second line: an integer C (number of columns)
// Next R lines: each line contains C integers (matrix elements)

// Output Format:

// Print the sum of each row in the form:

// Sum of row 1 = value
// Sum of row 2 = value
// ...

// Then print the sum of each column in the form:

// Sum of column 1 = value
// Sum of column 2 = value
// ...
// Sample Input
// 3
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output
// Sum of row 1 = 6
// Sum of row 2 = 15
// Sum of row 3 = 24

// Sum of column 1 = 12
// Sum of column 2 = 15
// Sum of column 3 = 18

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           scanf("%d",&arr[i][j]); 
        }
    }
    int row_sum[n];
    int col_sum[m];
    int r = 0;
    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = 0; j < m; j++){
            total += arr[i][j];
        }
        row_sum[r] = total;
        r++;
    }
    int c = 0;
    for(int i = 0; i < m; i++){
        int total = 0;
        for(int j = 0; j < n; j++){
            total += arr[j][i];
        }
        col_sum[c] = total;
        c++;
    }
    for(int i = 0; i < n; i++){
        printf("Sum of row %d = %d\n",i+1,row_sum[i]);
    }
    printf("\n");
    for(int i = 0; i < m; i++){
        printf("Sum of column %d = %d\n",i+1,col_sum[i]);
    }
    return 0;
}