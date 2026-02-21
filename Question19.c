// Input an integer N and check whether it is a Strong Number or not
// A number is Strong if the sum of factorials of its digits equals the original number.
// Input: 145
// Digits → 1, 4, 5
// Factorials:
// 1! = 1
// 4! = 24
// 5! = 120
// Sum = 1 + 24 + 120 = 145
// Strong Number

#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    scanf("%d",&n);
    int original = n;
    int total = 0;
    while(n > 0){
        int dig = n % 10;
        int val = factorial(dig);
        total += val;
        n = n / 10;
    }
    if(original == total){
        printf("Strong");
    }
    else{
        printf("Not Strong");
    }
    return 0;
}