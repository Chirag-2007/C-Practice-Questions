// Question: Find Power of a Number using Recursion
// Input:
// 2 5
// Output:
// 32

#include<stdio.h>

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    int smallAns = power(a, b - 1);
    return a * smallAns;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b < 0){
        printf("Negative exponent not supported");
        return 0;
    }
    int val = power(a, b);
    printf("%d",val);
    return 0;
}