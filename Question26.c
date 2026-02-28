// Write a program to find the sum of all even numbers from 1 to N

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int even_num = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            even_num += i;
        }
    }
    printf("%d",even_num);
    return 0;
}