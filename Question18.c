// Input an integer N and check whether it is a Harshad Number (Niven Number) or not
// A number is Harshad Number if:

// It is divisible by the sum of its digits.
// Input: 18
// Digits sum = 1 + 8 = 9
// 18 % 9 == 0 → Harshad Number

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int val = n;
    int sum = 0;
    while(n > 0){
        int dig = n % 10;
        sum += dig;
        n = n / 10;
    }
    if(val % sum == 0){
        printf("Harshad");
    }
    else{
        printf("Not Harshad");
    }
    return 0;
}