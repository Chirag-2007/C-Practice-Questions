// Question
// Grocery Shop Billing System
// A grocery shop stores prices of n items purchased.

// Write a C program to:
// Calculate total bill
// Find costliest item
// Count items costing more than ₹100
// Note: Items cannot be zero or negative number.

// Sample Input
// 5
// 50 120 75 200 90
// Sample Output
// Total Bill = 535
// Costliest Item = 200
// Items above 100 = 2

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    int max_val = arr[0];
    for(int j = 0; j < n; j++){
        if(max_val < arr[j]){
            max_val = arr[j];
        }
    }
    int count = 0;
    for(int k = 0; k < n; k++){
        if(arr[k] > 100){
            count++;
        }
    }
    printf("Total Bill = %d\n", total);
    printf("Costliest Item = %d\n", max_val);
    printf("Items above 100 = %d", count);
    return 0;
}