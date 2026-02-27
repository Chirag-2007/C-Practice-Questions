// Input an integer N and count how many factors it has
// Input: 12
// Factors: 1,2,3,4,6,12 → Count = 6

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
           count++;
        }
    }
    printf("%d",count);
    return 0;
}