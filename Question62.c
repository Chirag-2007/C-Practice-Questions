// Secondary max in a array

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max_val < arr[i]){
            max_val = arr[i];
        }
    }
    int sec_max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(sec_max < arr[i] && max_val != arr[i]){
            sec_max = arr[i];
        }
    }
    printf("%d",sec_max);
    return 0;
}