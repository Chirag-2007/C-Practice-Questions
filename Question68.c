// Diagonal Sum -->

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        total = total + arr[i][i];
    }
    printf("%d",total);
    return 0;
}