// Find 2nd Largest Element (WITHOUT sorting)

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int idx = 0;
    int max_element = arr[0];
    for(int i = 1; i < n; i++){
        if(max_element < arr[i]){
            max_element = arr[i];
            idx = i;
        }
    }
    arr[idx] = INT_MIN;
    int sec_max = arr[0];
    for(int i = 1; i < n; i++){
        if(sec_max < arr[i]){
            sec_max = arr[i];
        }
    }
    printf("%d",sec_max);
    return 0;
}