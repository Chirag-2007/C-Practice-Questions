// Q5.  Pyramid - 4
// A programmer is designing a visual pattern generator for a game scoreboard. The display shows a pyramid made of stars (*) and descending numbers.
// For each row:
// The number of stars decreases by one.
// The numbers increase in reverse order starting from the row number down to 1.
// Your task is to generate this pyramid pattern.
// Task:
// Write a program to print the first n lines of the pyramid shown below.
// Pattern:
// For n = 5
// ****1
// ***21
// **321
// *4321
// 54321
// Input Format:
// A single integer n ( n ≥ 1 )
// Output Format:
// Print the first n rows of the pattern.
// Sample Input:
// 3
// Sample Output:
// **1
// *21
// 321
// Important:
// Do NOT print spaces at the end of any row.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sp = n - 1;
    int st = 1;
    for(int i = 0; i < n; i++){
        for(int k = 1; k <= sp; k++){
            printf("*");
        }
        for(int j = st; j > 0; j--){
            printf("%d",j);
        }
        sp--;
        st++;
        printf("\n");
    }
    return 0;
}