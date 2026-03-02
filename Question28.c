// Write a program to print the Fibonacci series up to N terms

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i++){
        printf("%d ",a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}