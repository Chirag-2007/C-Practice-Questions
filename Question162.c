// Q7.  Pyramid - 5
// Write a program to print the first n lines of the number pyramid shown below:
// For n = 5:
// 1
// 121
// 12321
// 1234321
// 123454321
// Input Format:
// A single integer n, where n ≥ 1.
// Output Format:
// Print the first n lines of the above pyramid
// Sample Input:
// 3
// Sample Output:
// 1
// 121
// 12321
// Important Note: Don't print spaces at the end of the row

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        for(int j = i - 1; j > 0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}