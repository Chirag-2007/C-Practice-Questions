// Question
// Sales Performance Tracker
// A company records monthly sales (12 months).

// Write a program to:
// Find highest sales month
// Find lowest sales
// Calculate total annual sales

// Sample Input
// 12000 15000 18000 17000 16000 14000 20000 21000 19000 17500 16800 22000
// Sample Output
// Highest Sales = 22000
// Lowest Sales = 12000
// Total Annual Sales = 202500

#include <stdio.h>

int main(){
    int arr[12];
    for(int i = 0; i < 12; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < 12; i++){
        total += arr[i];
    }
    int max_val = arr[0];
    for(int j = 0; j < 12; j++){
        if(max_val < arr[j]){
            max_val = arr[j];
        }
    }
    int min_val = arr[0];
    for(int j = 0; j < 12; j++){
        if(min_val > arr[j]){
            min_val = arr[j];
        }
    }
    printf("Highest Sales = %d\n", max_val);
    printf("Lowest Sales = %d\n", min_val);
    printf("Total Annual Sales = %d", total);
    return 0;
}