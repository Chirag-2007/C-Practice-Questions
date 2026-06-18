// Q10.  Sum of Lower Triangular Matrix Elements
// Given a two-dimensional matrix of size m X m. Find the sum of the lower triangular elements of the array excluding the diagonal elements, subject to condition matrix is
// square.
// The main diagonal consists of elements where row index = column index.
// The lower triangular elements are the elements below the main diagonal.
// Strictly lower triangular elements satisfy the condition: row index > column index
// Note: The maximum size of the 2-D matrix is 6 X 6.
// Input Format
// First line contains an integer m — size of square matrix.
// Next m lines contain m space-separated integers representing the matrix.
// Output Format
// Print a single integer — the sum of strictly lower triangular elements.
// Sample Input
// 3 
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output
// 19
// Explanation:
// The input matrix is:
// 1 2 3
// 4 5 6
// 7 8 9
// The main diagonal elements are: 1, 5, 9.
// The strictly lower triangular elements (row > column) are:
// From row 2: 4
// From row 3: 7, 8
// These values: 4 + 7 + 8 = 19

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
            if(i > j){
                total += arr[i][j];
            }
        }
    }
    printf("%d",total);
    return 0;
}