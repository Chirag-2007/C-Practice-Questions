// Problem Statement 38
// Rahul wants to find highest marks among 3 students
// Write a program that:
// ● Uses structure
// ● Reads 3 students marks
// ● Prints highest marks
// Sample Test Case 1
// Input:
// 10 20 30
// Output:
// 30
// Sample Test Case 2
// Input:
// 5 15 10
// Output:
// 15

#include<stdio.h>

struct marks{
    int a;
    int b;
    int c;
};

int main(){
    struct marks m;
    scanf("%d %d %d",&m.a, &m.b, &m.c);
    if(m.a > m.b && m.a > m.c){
        printf("%d",m.a);
    }
    else if(m.b > m.a && m.b > m.c){
        printf("%d",m.b);
    }
    else{
        printf("%d",m.c);
    }
    return 0;
}