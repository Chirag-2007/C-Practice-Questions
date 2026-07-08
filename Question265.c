// Second Smallest Element in Array

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int first_min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(first_min > arr[i]){
            first_min = arr[i];
        }
    }
    int second_min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(second_min > arr[i] && arr[i] != first_min){
            second_min = arr[i];
        }
    }
    printf("%d",second_min);
    return 0;
}