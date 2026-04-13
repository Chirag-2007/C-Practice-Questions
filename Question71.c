// Problem: Find the Duplicate Element in an Array
// Input
// 5
// 1 3 4 2 2
// Output
// 2

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("%d ",arr[j]);
                return 0;
            }
        }
    }
    return 0;
}