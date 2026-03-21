// *******
//  *****
//   ***
//    *
//   ***
//  *****
// *******

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int st = n;
    int sp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sp; j++){
            printf(" ");
        }
        for(int k = 1; k <= st; k++){
            printf("*");
        }
        if(i < n / 2 + 1){
            st-=2;
            sp++;
        }
        else{
            st+=2;
            sp--;
        }
        printf("\n");
    }
    return 0;
}