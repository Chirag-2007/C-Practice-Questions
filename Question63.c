// Rotate array to the right by k positions

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int val = n;
    int num = n;
    int k;
    scanf("%d",&k);
    int div = 1;
    int mul = 1;
    int count = 0;
    while(val > 0){
        count++;
        val = val / 10;
    }
    k = k % count; // for greater that the number of digits in the number n...
    if(k < 0){ // for negative k rotations...
        k = k + count;
    }
    int i = 1;
    while(num > 0){
        if(i <= k){
            div = div * 10;
        }
        else{
            mul = mul * 10;
        }
        i++;
        num = num / 10;
    }
    int r = n % div;
    int q = n / div;
    int ans = r * mul + q;
    printf("%d",ans);
    return 0;
}