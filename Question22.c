// Input an integer N and find the GCD (Greatest Common Divisor) of two numbers

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    n = abs(n); // negative input
    m = abs(m); // negative input
    int smaller;
    if(n > m){
        smaller = m;
    }
    else{
        smaller = n;
    }
    if(n == 0 && m == 0){
        printf("0");
        return 0;
    }
    if(n == 0){
        printf("%d", m);
        return 0;
    }
    if(m == 0){
        printf("%d", n);
        return 0;
    }
    int gcd = 1;
    for(int i = 1; i <= smaller; i++){
        if(n % i == 0 && m % i == 0){
            gcd = i;
        }
    }
    printf("%d",gcd);
    return 0;
}