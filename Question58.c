// MATRIX ADDITION (3×3 Matrix)

#include<stdio.h>
int main(){
    printf("Enter order of matrix:\n");
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int brr[n][n];
    printf("Enter first matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("Matrix Addition: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            printf("%d ",arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}