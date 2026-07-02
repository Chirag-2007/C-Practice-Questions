// Problem Statement 50
// Arjun wants to pass union inside structure
// Write a program that:
// ● Uses structure containing union
// ● Assigns values
// ● Prints correct member
// Sample Test Case 1
// Input:
// 1 10
// Output:
// 10
// Sample Test Case 2
// Input:
// 2 5.5
// Output:
// 5.5

#include<stdio.h>

union Data {
    int i;
    float f;
};

struct Wrapper{
    int type;
    union Data d;
};

int main(){
    struct Wrapper w;
    scanf("%d",&w.type);
    if(w.type == 1){
        scanf("%d", &w.d.i);
        printf("%d", w.d.i);
    } 
    else{
        scanf("%f", &w.d.f);
        printf("%.1f", w.d.f);
    }
    return 0;
}