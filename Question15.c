// Input an integer N and find the largest digit inside it

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    while(n > 0){
        int dig = n % 10;
        if(max < dig){
            max = dig;
        }
        n = n / 10;
    }
    printf("%d",max);
    return 0;
}