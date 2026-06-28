// Problem Statement 31
// Karan wants to count digits using recursion
// Write a program that:
// ● Reads an integer
// ● Uses recursion
// ● Prints number of digits
// Sample Test Case 1
// Input:
// 1234
// Output:
// 4
// Sample Test Case 2
// Input:
// 9
// Output:
// 1

#include<stdio.h>

int count_num(int n){
    if(n == 0){
        return 0;
    }
    return 1 + count_num(n / 10);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = count_num(n);
    printf("%d",ans);
    return 0;
}