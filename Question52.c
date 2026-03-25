// Leap Year -->

// Leap year rules (strict logic):
// 400 se divisible → always leap year
// 100 se divisible → NOT leap year
// 4 se divisible → leap year

#include<stdio.h>
int main(){
    int yr;
    scanf("%d", &yr);
    if((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0)){
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
    return 0;
}