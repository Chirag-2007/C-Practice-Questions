// Input an integer N and print its reverse (without converting to string)

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    while(n > 0){
        int dig = n % 10;
        ans = ans * 10 + dig;
        n = n / 10;
    }
    printf("%d",ans);
    return 0;
}