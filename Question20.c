// A number is perfect square if its square root is an integer -- (Important Question)
// Input: 16
// √16 = 4 → Perfect Square
// Input: 25
// √25 = 5 → Perfect Square
// Input: 20
// √20 = 4.47 → Not Perfect Square
// Input: 1
// √1 = 1 → Perfect Square

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int root = sqrt(n);
    if(root * root == n){
        printf("Perfect Sqaure");
    }
    else{
        printf("Not Perfect Square");
    }
    return 0;
}