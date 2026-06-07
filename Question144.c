// Q4.  Area and Perimeter of a rectangle
// Write a program to print area and perimeter of rectangle using following formula.
// Area = length * breadth
// Perimeter = 2 * (length + breadth)
// Input Format:
// Each test case contains length and width between 1 and 100, separated by a space.
// Output Format:
// Print the area and perimeter of the rectangle separated by a space.
// Sample Input:
// 10 20
// Sample Output:
// 200 60

#include<stdio.h>
int main(){
    int l, b;
    scanf("%d %d",&l,&b);
    int area = l * b;
    int perimeter = 2 * (l + b);
    printf("%d %d",area,perimeter);
    return 0;
}