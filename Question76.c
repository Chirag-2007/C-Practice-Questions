// Question: Sum of Digits Using Recursion

#include<stdio.h>

int sumDigit(int n){
    if(n == 0){ // Base case
        return 0;
    }
    int val = sumDigit(n / 10); // recursive work
    return (n % 10) + val; // self work
}

int main(){
    int num;
    scanf("%d",&num);
    int val = sumDigit(num);
    printf("%d",val);
    return 0;
}