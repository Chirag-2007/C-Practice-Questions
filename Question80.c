// Write a recursive function to calculate factorial of a number

#include<stdio.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    scanf("%d",&n);
    int val = fact(n);
    printf("%d",val);
    return 0;
}