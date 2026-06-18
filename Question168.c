// Q13.  Matrix Equality
// Kamal is given two matrices of size m × n. Your task is to compare the two matrices and perform an operation based on the comparison.
// Conditions:
// If both matrices are equal (i.e., every corresponding element in both matrices is the same), then display the sum of the two matrices.
// If the matrices are not equal, then display the difference of the matrices by subtracting the second matrix from the first matrix. (Matrix1 − Matrix2).
// Input Format:
// First line contains an integer m, representing the number of rows.
// Second line contains an integer n, representing the number of columns.
// Next m lines contain n space-separated integers representing the elements of the first matrix.
// Next m lines contain n space-separated integers representing the elements of the second matrix.
// Output Format:
// Print the resulting matrix after performing the required operation.
// Each row of the result should be printed on a new line with elements separated by spaces.
// Sample Input 1:
// 3         // Number of Rows
// 3         // Number of Columns
// 2 2 2     // Elements of First Matrix
// 2 2 2
// 2 2 2
// 2 2 2     // Elements of Second Matrix
// 2 2 2
// 2 2 2
// Sample Output 1:
// 4 4 4
// 4 4 4
// 4 4 4
// Explanation: Both matrices are identical. Hence, the sum of corresponding elements is displayed.
// Sample Input 2:
// 2         // Number of Rows
// 3         // Number of Columns
// 14 1 12   // Elements of First Matrix
// 11 1 12 
// 1 13 1    // Elements of Second Matrix
// 1 1 1
// Sample Output 2:
// 13 -12 11
// 10 0 11
// Explanation: The two matrices are not equal. Hence, the difference (Matrix1 − Matrix2) is calculated and displayed

#include<stdio.h>
int main(){
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int flag = 1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] != brr[i][j]){
                flag = 0;
            }
        }
    }
    if(flag == 1){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                printf("%d ",arr[i][j] + brr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                printf("%d ",arr[i][j] - brr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}