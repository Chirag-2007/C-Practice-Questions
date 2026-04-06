// *     *
// **   **
// *** ***
// *******
// *** ***
// **   **
// *     *
// Only For Odd Number input...

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int st = 1;
    int sp = n - 2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= st; j++){
            printf("*");
        }
        for(int k = 1; k <= sp; k++){
            printf(" ");
        }
        if(i == n/2 + 1){
            for(int t = 1; t < st; t++){
                printf("*");
            }
        }
        else{
            for(int t = 1; t <= st; t++){
                printf("*");
            }
        }
        if(i < n/2 + 1){
            st++;
            sp-=2;
        }
        else{
            st--;
            sp+=2;
        }
        printf("\n");
    }
    return 0;
}