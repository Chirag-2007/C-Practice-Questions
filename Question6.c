// Input an integer N and count how many digits it has

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    while(n > 0){
        int dig = n % 10;
        count++;
        n = n / 10;
    }
    printf("%d",count);
    return 0;
}