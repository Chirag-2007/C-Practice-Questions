// Online Food Delivery & Coupon
// An online food delivery app calculates the total payable amount.

// Rules:
// • Order amount entered by user
// • If order ≥ ₹500 → free delivery
// • Else delivery charge = ₹40
// • If coupon applied (1 = yes, 0 = no) → 10% discount
// • Maximum discount allowed = ₹100
// • Minimum payable amount = ₹100

// Write a program to calculate final payable amount.

#include <stdio.h>
int main(){
    int amount, coupon;
    int total;
    scanf("%d",&amount);
    scanf("%d",&coupon);
    if(amount >= 500){
        total = amount;
    }
    else{
        total = amount + 40;
    }
    int discount = 0;
    if(coupon == 1){
        discount = total * 10 / 100;
        if(discount > 100){
            discount = 100;
        }
    }
    int val = total - discount;
    if(val < 100){
        val = 100;
    }
    printf("%d", val);

    return 0;
}
