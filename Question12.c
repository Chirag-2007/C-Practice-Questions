// Input an integer N and print the difference between the sum of even digits and the sum of odd digits

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int even_num = 0;
    int odd_num = 0;
    while(n > 0){
        int dig = n % 10;
        if(dig % 2 == 0){
            even_num = even_num + dig;
        }
        else{
            odd_num = odd_num + dig;
        }
        n = n / 10;
    }
    int diff = even_num - odd_num;
    printf("%d",diff);
    return 0;
}