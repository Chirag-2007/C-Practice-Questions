// Q7.  Given 2 angles of a triangle, find the 3rd angle
// Write a C Program to input two angles from user and find third angle of the triangle.
// Input Format
// Each test case contains 2 integers denoting the 2 angles of triangle.
// Output Format
// Print the 3rd angle of triangle.
// Sample Input
// 60 80
// Sample Output
// 40

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    int third = 180 - (n + m);
    printf("%d",third);
    return 0;
}