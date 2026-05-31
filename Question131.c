// Q3.  Aggregate and Percentage Marks of a student
// Write a program to calculate the aggregate and percentage marks obtained by a student.
// If the percentage has decimals, print the floor value of the percentage. For example 9.89 will be floored to 9.
// Input
// Each test case contains marks obtained by the student in five different subjects 0 and 100, separated by a space.
// Output
// Print the aggregate and percentage marks separated by a space.
// Sample Input
// 10 20 30 40 50
// Sample Output
// 150 30

#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < 5; i++){
        total += arr[i];
    }
    int percentage = total / 5;
    printf("%d %d",total, percentage);
    return 0;
}