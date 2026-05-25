// Q5. Website Visitor Counter [For SET-1]
// Problem Statement
// A website tracks the number of visitors every hour. The administrator wants to monitor both the number of visitors in the current hour and the cumulative total visitors since the website started. The function should maintain the total count across multiple function calls while resetting only when the program restarts.
// Write a C program that takes the number of visitors received per hour and prints both the count for that hour and the total visitors since the website started.
// Input Format
// The first line contains an integer N, representing the number of hours being recorded.
// The next N lines each contain an integer representing the number of visitors in that hour.
// Output Format
// For each hour, print two integers: the number of visitors in that hour and the total visitors so far.
// Sample Test Case 1
// Input:
// 3  
// 120  
// 85  
// 95  
// Output:
// 120 120  
// 85 205  
// 95 300  

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
        printf("%d %d\n",arr[i],total);
    }
    return 0;
}