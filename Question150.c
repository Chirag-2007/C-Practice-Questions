// Q10.  Electricity Bill Calculator
// Write a program to calculate the total electricity bill based on the number of units consumed. The pricing is determined by slabs:
// 1. Up to 100 units: ₹1 per unit.
// 2. 101 to 200 units: ₹2 per unit.
// 3. Above 200 units: ₹3 per unit.
// 4. If the total bill amount exceeds ₹1000, an additional surcharge of 5% is added to the bill.
// Input Format
// A single integer representing the total units consumed.
// Output Format
// Print the total bill amount as a floating-point number formatted to two decimal places: "Total Bill: [amount]".
// Constraints
// 0≤units≤10,000
// 0≤units≤10,000
// Sample Test Case
// Input:
// 150
// Output:
// Total Bill: 300.00
// (Explanation: 150 units fall in the ₹2 bracket. 150 * 2 = 300. No surcharge as 300 < 1000)

#include<stdio.h>
int main(){
    float unit;
    scanf("%f",&unit);
    float bill;
    if(unit <= 100){
        bill = unit * 1;
    }
    else if(unit >= 101 && unit <= 200){
        bill = unit * 2;
    }
    else{
        bill = unit * 3;
    }
    float subcharge;
    float total;
    if(bill >= 1000){
        subcharge = bill * 5 / 100;
        total = bill + subcharge;
    }
    else{
        total = bill;
    }
    printf("Total Bill: %.2f",total);
    return 0;
}