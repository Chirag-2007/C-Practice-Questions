// // Call By Reference -->

#include<stdio.h>

void swap(int *a, int *b){ // value lene ke liya ose address pr padi h jo
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After Swapped:\n");
    printf("%d %d\n",*a,*b);
}

int main(){
    int n, m;
    printf("Enter 2 Numbers:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Before Swapped:\n");
    printf("%d %d\n",n,m);
    swap(&n,&m); // Address bhej rahe h yaha se
    printf("After Outer Swapped:\n");
    printf("%d %d\n",n,m);
    return 0;
}