// Input an integer N and check if it is a perfect number

// Proper divisors =
// N ke divisors – N itself

// Example:
// Divisors of 6 → 1, 2, 3, 6
// Proper divisors → 1, 2, 3 (6 hata deta hai)
// Proper divisor == Sum of dovisor expect that n --> Perfect number

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int original_num = n;
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(original_num == sum){
        printf("Perfect number");
    }
    else{
        printf("Not perfect");
    }
    return 0;
}