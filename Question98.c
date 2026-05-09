// Write a recursive function which can find Nth Fibonacci number.  
// Input format : First line take input – N 
// Output format : Print the Nth Fibonacci number. 
// Sample Input  
// 6 
// Sample output 
// 8 
// Explanation  
// Fibonacci Numbers are : 0 1 1 2 3 5 8 13 ……. 
// Hence 6th Fibonacci number is - 8 

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
    printf("%d",fib(n));
    return 0;
}