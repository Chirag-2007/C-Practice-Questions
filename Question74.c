// Write a recursive function in C to find the Nth Fibonacci number
// Input:
// 5
// Output:
// 5

#include<stdio.h>

int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid input");
        return 0;
    }
    int val = fib(n);
    printf("%d",val);
    return 0;
}