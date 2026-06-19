// Q2.  Count Positive, Negative, Even, and Odd Elements in an Array
// A warehouse monitoring system records 10 sensor readings every hour to analyze performance. Each reading may indicate profit (positive value) or loss (negative value),
// and it is also classified as even (stable measurement) or odd (fluctuating measurement). Given 10 integers (each on a new line), your task is to count and print the number
// of positive, negative, even, and odd elements in four separate lines in the same order.
// Task:
// Write a program to find out in an array how many elements are positive, how many are negative, how many are even and how many odd.
// Input
// Assume the size of array as 10. Each test case will have 10 elements in ten different lines.
// Output
// Print four lines showing the counts in the following order:
// Number of positive elements
// Number of negative elements
// Number of even elements
// Number of odd elements
// Sample Input :-3
// 10 
// 20 -4
// 7
// 1-2
// 3
// 4
// 5
// Sample Output :
// 7
// 3
// 5
// 5

#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    int count_positive = 0;
    int count_negative = 0;
    int count_even = 0;
    int count_odd = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] > 0){
            count_positive++;
        }
        else{
            count_negative++;
        }
        if(arr[i] % 2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("%d\n",count_positive);
    printf("%d\n",count_negative);
    printf("%d\n",count_even);
    printf("%d",count_odd);
    return 0;
}