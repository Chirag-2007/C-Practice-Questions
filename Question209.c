// Problem Statement 23
// Ravi wants to find greater of three numbers using function.
// Write a program that:
// ● Reads three integers
// ● Uses a function with pointers
// ● Returns maximum
// Sample Test Case 1
// Input:
// 1 2 3
// Output:
// 3
// Sample Test Case 2
// Input:
// -1 -2 -3
// Output:
// -1

#include<stdio.h>

int greater_num(int* x, int* y, int* z){
    if(*x > *y && *x > *z){
        return *x;
    }
    else if(*y > *x && *y > *z){
        return *y;
    }
    else{
        return *z;
    }
}

int main(){
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d",greater_num(&x,&y,&z));
    return 0;
}