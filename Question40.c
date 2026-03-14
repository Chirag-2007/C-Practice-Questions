// QUESTION: Count Frequency of Each Element in the Array
// Problem Statement:
// Given an array of integers, count how many times each element appears in the array.
// Duplicate elements ko sirf ek baar print karo.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n], unique[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        int exist = 0;
        for(int j = 0; j < count; j++){
            if(arr[i] == unique[j]){
                exist = 1;
                break;
            }
        }
        if(exist == 0){
            unique[count] = arr[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        int freq = 0;
        for(int j = 0; j < n; j++){
            if(unique[i] == arr[j]){
                freq++;
            }
        }
        printf("%d occurs %d times\n",unique[i],freq);
    }
    return 0;
}