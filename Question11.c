// Input an integer N and check whether it is an Armstrong number or not

#include<stdio.h>

int power(int dig, int count){
    int ans = 1;
    for(int i = 1; i <= count; i++){
        ans = ans * dig;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    int num = n;
    int val = n;
    int count = 0;
    while(val > 0){
        count++;
        val = val / 10;
    }
    int armstrong_num = 0;
    while(n > 0){
        int dig = n % 10;
        armstrong_num = armstrong_num + power(dig, count);
        n = n / 10;
    }
    if(armstrong_num == num){
        printf("Armstrong Number\n");
    }
    else{
        printf("Not a Armstrong Number\n");
    }
    return 0;
}