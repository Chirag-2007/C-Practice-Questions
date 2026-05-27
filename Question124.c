// Q 6. Network Request Counter (Auto & Static) 
// A web server tracks the number of requests received every minute. For each execution of the tracking function, it should count the requests in that instance but also maintain a persistent count across all executions to track total requests since the server started.
// Write a C program that takes the number of requests received per function call and prints both the count for that call and the cumulative total.
// Input Format
// The first line contains an integer N, representing the number of function calls.
// The next N lines contain an integer representing the number of requests in each call.
// Output Format
// For each call, print two integers: the number of requests in that instance and the total requests received so far.
// Sample Test Case 1
// Input:
// 3  
// 50  
// 30  
// 20  
// Output:
// 50 50  
// 30 80  
// 20 100  

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