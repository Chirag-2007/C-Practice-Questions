// Input an integer N and print the sum of its digits

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n > 0){
        int dig = n % 10;
        sum += dig;
        n = n / 10;
    }
    printf("%d",sum);
    return 0;
}