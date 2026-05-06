// Parking Fee System with Extra Hours
// A mall parking system calculates parking fees.

// Rules:
// First 2 hours → ₹30 per hour
// After 2 hours → ₹50 per extra hour
// If total fee ≥ ₹500 → 10% discount
// Minimum fee = ₹30
// Write a program to calculate the final parking fee.

// Input Format
// Number of hours parked (integer)
// Output Format
// Final parking fee (integer)

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int min_fee;
    if(n <= 2){
        min_fee = n * 30;
    }
    else{
        min_fee = (n - 2) * 50 + 60;
        if(min_fee >= 500){
            int discount = (min_fee * 10) / 100;
            min_fee = min_fee - discount;
        }
    }
    if(min_fee < 30){
        min_fee = 30;
    }
    printf("%d",min_fee);
    return 0;
}