// Given an array, move all 0s to the end while maintaining the relative order of non-zero elements.
// Input:  [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int t = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] != 0){
            arr[t] = arr[j];
            t++;
        }
    }
    while(t < n){
        arr[t] = 0;
        t++;
    }
    for(int q = 0; q < n; q++){
       printf("%d ",arr[q]);
    }
    return 0;
}