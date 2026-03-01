// Write a program to print the sum of all prime numbers from 1 to N
// Input: 10
// Prime numbers → 2, 3, 5, 7
// Sum = 17

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int total = 0;
    for(int i = 2; i <= n; i++){ // i = 2 se chalega because prime number 1 se hote h and agr 1 se kiya to +1 extra rahega total ma...
        int flag = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            total += i;
        }
    }
    printf("%d",total);
    return 0;
}