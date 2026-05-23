// Decimal to Binary conversion -->

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[50];
    int i = 0;
    int count = 0;
    while(n > 0){
        int dig = n % 2;
        arr[i] = dig;
        n = n / 2;
        count++;
        i++;
    }
    for(int i = count - 1; i >= 0; i--){
        printf("%d",arr[i]);
    }
    return 0;
}