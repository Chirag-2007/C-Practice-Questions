// Given an array of N integers, print all the leading elements
// n = 6
// arr = 16 17 4 3 5 2
// Sample Output
// 17 5 2

#include<stdio.h>
#include <limits.h> // For minimum value...
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max_elm = INT_MIN;
    int i = 0;
    int val[n];
    for(int j = n - 1; j >= 0; j--){
        if(arr[j] >= max_elm){
            max_elm = arr[j];
            val[i] = arr[j];
            i++;
        }
    }
    for(int k = i - 1; k >= 0; k--){
        printf("%d ", val[k]);
    }
    return 0;
}