// Q2.  Leap Year
// Write a program to find whether the year is leap or not? A year is considered a leap year if it is perfectly divisible by 4. Years that are perfectly
// divisible by 100 (for example, 2000, 2100, 2200) are exceptions. Such a year is a leap year only if it is also perfectly divisible by 400.
// Input
// Each test case will contain a year greater than 1000 AD and less than 10000 AD.
// Output
// Print "Leap Year" if the given year is a leap year and "Not a Leap Year" otherwise
// Sample Input
// 2017
// Sample Output
// Not a Leap Year

#include<stdio.h>
int main(){
    int yr;
    scanf("%d",&yr);
    if(yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0)){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}