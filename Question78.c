// Deleting Element in array

#include<stdio.h>
int main(){
    int n, x;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d",&x);
    for(int j = x - 1; j < n - 1; j++){
        arr[j] = arr[j + 1];
    }
    n = n - 1;
    for(int t = 0; t < n; t++){
        printf("%d ",arr[t]);
    }
    return 0;
}