// Input an integer N and print how many “even digits” and “odd digits” it contains.
// Example:
// Input: 57246
// Even digits: 3
// Odd digits: 2

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int even_count = 0;
    int odd_count = 0;
    while(n > 0){
        int dig = n % 10;
        if(dig % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
        n = n / 10;
    }
    printf("Even digits:%d\n",even_count);
    printf("Odd digits:%d",odd_count);
    return 0;
}