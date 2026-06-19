// Q5.  Matrix Multiplication
// You are building a basic scientific calculator that supports matrix operations. One of the most important operations in linear algebra is matrix multiplication (also known
// as the dot product of matrices).
// You are given two matrices A and B in the form of two dimensional arrays. Write a program to perform matrix multiplication.
// Input Format:
// First line contains two integers R1 C1 — rows and columns of matrix A.
// Next R1 lines contain C1 space-separated integers (elements of matrix A).
// Next line contains two integers R2 C2 — rows and columns of matrix B.
// Next R2 lines contain C2 space-separated integers (elements of matrix B).
// Output Format:
// Print matrix of size R1*C2 in R1 lines with each line containing C2 space separated integers of corresponding row.
// Constraints:
// 1 <= T <= 1000
// 1 <= R1, C1, R2, C2 <= 50
// C1 will be equals to R2
// Sample Input:
// 2 3    // R1 C1
// 1 2 3  // matrix A
// 4 5 6
// 3 2    // R2 C2
// 2 3    // matrix B
// 1 2
// 2 1
// Sample Output:
// 10 10  // A * B 
// 25 28

#include<stdio.h>
int main(){
    int r1,c1;
    scanf("%d %d",&r1,&c1);
    int arr[r1][c1];
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r2,c2;
    scanf("%d %d",&r2,&c2);
    int brr[r2][c2];
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(c1 != r2){
        printf("Matrix Multiplication not possible");
    }
    else{
        int crr[r1][c2];
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                crr[i][j] = 0;
                for(int k = 0; k < c1; k++){
                    crr[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                printf("%d ",crr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}