// Input an integer N and print whether it is a palindrome number or not

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int orginal_num = n;
    int rev = 0;
    while(n > 0){
        int dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }
    if(orginal_num == rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}