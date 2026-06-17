// Q6.  Pyramid - 1
// Write a program to print the first n lines of the number pyramid shown below:
// For n = 5:
// 1
// 12
// 123
// 1234
// 12345
// Input Format:
// A single integer n, where n ≥ 1
// Output Format:
// Print the first n lines of the above pyramid.
// Sample Input
// 3
// Sample Output
// 1
// 12
// 123

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}