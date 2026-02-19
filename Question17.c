// Input an integer N and count how many times digit ‘1’ appears in it

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = 1;
    int count = 0;
    while(n > 0){
        int dig = n % 10;
        if(dig == x){
            count++;
        }
        n = n / 10;
    }
    printf("%d",count);
    return 0;
}