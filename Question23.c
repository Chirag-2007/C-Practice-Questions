// Input two integers N and M and find the LCM (Least Common Multiple)

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int smaller;
    if(n > m){
        smaller = m;
    }
    else{
        smaller = n;
    }
    int gcd = 1;
    for(int i = 1; i <= smaller; i++){
        if(n % i == 0 && m % i == 0){
            gcd = i;
        }
    }
    int lcm = n * m / gcd;
    printf("%d",lcm);
    return 0;
}
