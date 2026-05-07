// Smart Income Tax Calculator with Rebate + Surcharge
// A smart taxation system calculates annual income tax based on slabs and additional rules.

// Rules:
// Income ≤ ₹2,50,000 → No tax
// ₹2,50,001 – ₹5,00,000 → 5%
// ₹5,00,001 – ₹10,00,000 → 20%
// Above ₹10,00,000 → 30%
// If income ≤ ₹5,00,000 → rebate of ₹12,500 (max)
// If income > ₹50,00,000 → surcharge 10% on tax
// Minimum tax payable (if taxable) = ₹1000

// Write a program to calculate final tax payable.

// Input Format
// Annual income (integer)
// Output Format
// Print only one integer: final tax

// Sample Test Case 1
// Input:
// 600000
// Output:
// 32500
// Sample Test Case 2
// Input:
// 400000
// Output:
// 1000

// Rebate --> tax se minus 12500 (if income less than 5 lakhs)
// Surcharge --> tax ke uper tax

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int tax;
    if(n <= 250000){
        tax = 0; // less than 2.5 lakh tax = 0
    }
    else if(n > 250000 && n <= 500000){
        tax = 12500; // 5 lakh = (2.5 lakh - tax = 0 and 2.5 lakh with 5% = 12500)
    }
    else if(n > 500000 && n <= 1000000){
        tax = 12500 + ((n - 500000) * 20) / 100; // till 5 lakhs tax (12500) + After 5 lakhs tax with 20%
    }
    else{
        tax = 12500 + 100000 + ((n - 1000000) * 30) / 100; // till 5 lakhs (12500) + till 10 lakhs (1 lakh) --> [2.5 lakh with 20% (50,000) + 2.5 lakh with 20% (50,000)] + After 10 lakhs with 30%
    }
    if(n <= 500000){
        tax = tax - 12500;
    }
    if(n > 5000000){
        int sub_tax = (tax * 10) / 100;
        tax = tax + sub_tax;
    }
    if(n <= 250000){
        tax = 0;
    }
    else{
        if(tax < 1000){
            tax = 1000;
        }
    }
    printf("%d",tax);
    return 0;
}