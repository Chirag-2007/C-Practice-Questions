// Q14.  Pyramid - 7
// In a futuristic smart city, an AI construction robot is assigned to build a decorative pyramid wall. Every brick manufactured in the factory has a unique serial ID
// number. The robot does not restart numbering — it keeps using the next available brick from storage.
// The robot places bricks row by row:
// First row → 1 brick
// Second row → 2 bricks
// Third row → 3 bricks
// and so on...
// The numbering continues sequentially without resetting, because each brick represents a unique ID.
// Task:
// Print the number pyramid with continuous numbering for N lines.
// Example:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// Input
// A single integer number n where n >=1.
// Output
// Print the first n lines of the pyramid
// Important Note: Print spaces in between the numbers. But Don't print spaces at the end of the row.
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