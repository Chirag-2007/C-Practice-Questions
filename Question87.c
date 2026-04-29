// Given an array of size N.
// Return frequency of each number.

// Example:
// Input: [1,2,2,3,3,3]
// Output:
// 1 → 1  
// 2 → 2  
// 3 → 3

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int unique[10] = {0};   // initialize to zero karne ka method...
    for(int i = 0; i < n; i++){
        unique[arr[i]]++;
    }
    for(int j = 0; j < 10; j++){
        if(unique[j] > 0){
            printf("%d -> %d\n",j,unique[j]);
        }
    }
    return 0;
}