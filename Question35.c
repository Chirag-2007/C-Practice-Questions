// Find largest element in an array

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max_value = arr[0];
    for(int i = 1; i < n; i++){
        if(max_value < arr[i]){
            max_value = arr[i];
        }
    }
    printf("%d",max_value);
    return 0;
}