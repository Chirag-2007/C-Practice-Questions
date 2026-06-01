// Q4.  Area and perimeter of circle
// Write a program to print area and perimeter of circle using following formula. Also display the area and perimeter of circle up to two decimal
// places.
// Perimeter = 2*pi*radius
// Area = pi*radius*radius
// Take value of pi as 3.14
// Sample input
//  5 //radius of circle
// Sample output
// 78.50         
// 31.40

#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    float p = 2 * 3.14 * r;
    float a = 3.14 * r * r;
    printf("%.2f\n",a);
    printf("%.2f",p);
    return 0;
}