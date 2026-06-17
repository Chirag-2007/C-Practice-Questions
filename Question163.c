// Q8.  Pyramid - 6
// Write a program to print the first n lines of the following pyramid pattern:
// 1
// 212
// 32123
// 4321234
// 543212345
// Input
// A single integer n (1 ≤ n) representing the number of lines of the pyramid.
// Output
// Print the first n lines of the pyramid
// Important Note: Don't print spaces at the end of the row.
// Sample Input
// 3
// Sample Output
// 1
// 212
// 32123

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j > 1; j--){
            printf("%d",j);
        }
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}