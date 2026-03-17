// Pattern Printing -->
// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",x);
        }
        x++;
        printf("\n");
    }
    return 0;
}