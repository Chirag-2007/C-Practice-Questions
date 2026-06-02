// Q6.  Convert days into years, weeks and days
// Write a C program to input number of days from user and convert it to years, weeks and days.
// You can ignore the concept of leap year in this question.
// Input Format
// Each test case contains an integer denoting total number of days.
// Output Format
// Print the diameter years, weeks and days separated by space.
// Sample Input
// 399
// Sample Output
// 1 4 6

#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    int yr = days / 365;
    int left = days % 365;
    int week = left / 7;
    int left_days = left % 7;
    printf("%d %d %d",yr, week, left_days);
    return 0;
}