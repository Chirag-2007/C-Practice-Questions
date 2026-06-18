// Q9.  Pyramid - 7
// Write a program to print the n lines of the below pyramid
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// Input
// Each test case will contain a number n where n >=1.
// Output
// Print the first n lines of the pyramid
// Important Note: Don't print spaces at the end of the row.
// Sample Input
// 3
// Sample Output
// 1
// 2 3
// 4 5 6

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}