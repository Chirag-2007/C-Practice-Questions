// Input an integer N and print the product of all its digits

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prd = 1;
    while(n > 0){
        int dig = n % 10;
        prd = prd * dig;
        n = n / 10;
    }
    printf("%d",prd);
    return 0;
}