// Question:
// You are given two 2D arrays A and B of size N × M.
// For every element position (i, j):

// If A[i][j] == B[i][j],
// store A[i][j] – B[i][j] in result array C
// If A[i][j] != B[i][j],
// store A[i][j] + B[i][j] in array C

// Finally, print the resulting 2D array C

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    printf("Enter 1st Array Input:\n");
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter 2nd Array Input:\n");
    int brr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == brr[i][j]){
                crr[i][j] = arr[i][j] - brr[i][j];
            }
            else{
                crr[i][j] = arr[i][j] + brr[i][j];
            }
        }
    }
    printf("Array Output:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}