// Student Marks Analysis System
// A teacher wants to analyze marks of n students.

// Write a C program to:
// Store marks in an array
// Find highest marks
// Find average marks

// Count students scoring above average

// Sample Input
// 5
// 78 85 60 90 72
// Sample Output
// Highest = 90
// Average = 77.00
// Above Average Count = 2

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int highest = arr[0];
    for(int j = 0; j < n; j++){
        if(highest < arr[j]){
            highest = arr[j];
        }
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        total = total + arr[i];
    }
    float avg = total / n;
    int count = 0;
    for(int k = 0; k < n; k++){
        if(arr[k] > avg){
            count++;
        }
    }
    printf("Highest = %d\n", highest);
    printf("Average = %.2f\n", avg);
    printf("Above Average Count = %d", count);
    return 0;
}