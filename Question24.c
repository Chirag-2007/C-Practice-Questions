// Input an integer N and print all the factors of N
// Input: 12
// Output:
// 1 2 3 4 6 12

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
           printf("%d ",i);
        }
    }
    return 0;
}