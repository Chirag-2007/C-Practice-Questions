// Q5.  Area and perimeter of circle
// Write a program to print area and perimeter of circle using following formula. Also display the area and perimeter of circle up to two decimal
// places.
// Area = pi * radius * radius
// Perimeter = 2 * pi * radius
// Take value of pi as 3.14
// Input Format:
// Each test case contains radius of circle.
// Output Format:
// Print the area and perimeter of the circle separated by a space.
// Sample Input:
// 5
// Sample Output:
// 78.50 31.40

#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    float pi = 3.14;
    float area = pi * r * r;
    float perimeter = 2 * pi * r;
    printf("%.2f %.2f",area,perimeter);
    return 0;
}