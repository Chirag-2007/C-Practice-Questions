// Pattern Printing -->
//    1
//   121
//  12321
// 1234321

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int st = 1;
    int sp = n / 2 + 1;
    for(int i = 1; i <= n; i++){
        for(int j = sp; j >= 0; j--){
            printf(" ");
        }
        int x = 1;
        for(int j = 1; j <= st; j++){
            if(j < st/2 + 1){
                printf("%d",x);
                x++;
            }
            else{
                printf("%d",x);
                x--;
            }
        }
        sp--;
        st+=2;
        printf("\n");
    }
    return 0;
}