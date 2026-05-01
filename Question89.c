// Rotate a Square matrix by 90 degree
#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i < j){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    printf("Rotated Matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = m - 1; j >= 0; j--){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}