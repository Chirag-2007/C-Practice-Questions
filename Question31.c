// Swap of 2 numbers

// Method 1 -->

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Original Number:\n");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("Swapped Number:\n");
    printf("%d %d",a,b);
    return 0;
}

// Method 2 -->

#include<stdio.h>
int main(){
    int a,b;
    printf("Original Number:\n");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped Number:\n");
    printf("%d %d",a,b);
    return 0;
}