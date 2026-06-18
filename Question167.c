// Q12.  Check Matrix is upper triangular or not
// In a scientific computing lab, a program analyzes square data tables before running simulations. Some optimized calculations can run only if the table forms an upper
// triangular matrix, meaning every value below the main diagonal must be 0. The system first displays the matrix exactly as entered and then verifies this condition. Given
// a square matrix of order n, your task is to print the matrix and determine whether it is an upper triangular matrix or not.
// Your task is to:
// 1. Read a square matrix of order n
// 2. Display the matrix
// 3. Determine whether it is an upper triangular matrix or not
// Input Format
// First line contains an integer n — the order of the matrix
// Next n lines contain n space-separated integers representing the matrix
// Output Format
// The program must first print the matrix in an  n×n grid(Every integer in the row must be followed by a single space, including the last element of each row.)
// On Next line after matrix printing, print(case sensitive) either 
// upper triangular matrix
// OR                        
// not an upper triangular matrix
// Sample Input 1
// 3 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// Sample Output 1
// 1 2 3
// 4 5 6
// 7 8 9
// not an upper triangular matrix
// Sample Input 2
// 3
// 1 2 3 
// 0 5 6
// 0 0 9
// Sample Output 2
// 1 2 3
// 0 5 6
// 0 0 9
// upper triangular matrix

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
    int upper = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > j){
                if(arr[i][j] != 0){
                    upper = 0;
                    break;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(upper == 1){
        printf("upper triangular matrix");
    }
    else{
        printf("not an upper triangular matrix");
    }
    return 0;
}