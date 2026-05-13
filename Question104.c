// Write a program to print the following pattern for the given number of rows (N).
// Pattern for N = 4
//    *
//   ***
//  *****
// *******
// Input format:
// Integer N (Total no. of rows)
// Output Format:
// The pattern in N lines
// Constraints:
// 0 <= N <= 50
// Sample Input 1:
// 3
// Sample Output 1:
//   *
//  ***
// *****

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i - 1; j++){
            printf(" ");
        }
        for(int k = 1; k <= 2*i + 1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}