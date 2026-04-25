// Print numbers from 1 to N using recursion

#include<stdio.h>

void printingNumber(int n){
    if(n == 0){ // Base Case
        return;
    }
    printingNumber(n - 1);  // Recursive Work
    printf("%d\n",n);   // Self Work
}

int main(){
    int n;
    scanf("%d",&n);
    printingNumber(n);
    return 0;
}