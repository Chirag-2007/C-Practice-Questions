// 2.	Counting Product Sales in a Supermarket
// Imagine you are working as a data analyst for a supermarket chain. The store sells multiple products, and at the end of each day, the system generates a list of N product IDs representing items sold that day. However, some products appear multiple times in the list since they were bought by multiple customers.
// Your task is to analyze the sales report by determining:
// •	How many times each product was sold (i.e., count the frequency of each product ID in the list).
// •	Ensure that each product ID appears only once in the final report to avoid redundancy.
// Write a C program that takes an array of N product IDs and prints each unique product ID along with the number of times it was sold.
// Input Format:
// 1.	The first line contains an integer N (1 ≤ N ≤ 1000), representing the number of products sold.
// 2.	The second line contains N space-separated integers, where each integer represents a product ID (1 ≤ Product ID ≤ 100000).
// Output Format:
// •	Each line contains two integers:
// o	The product ID
// o	The number of times it was sold
// •	The output should be in the order of first appearance in the input.
// Example Test Cases

// Test Case 1:
// Input:
// 7
// 101 202 202 303 404 101 101
// Output:
// 101 3
// 202 2
// 303 1
// 404 1
// Explanation:
// •	Product 101 was sold 3 times
// •	Product 202 was sold 2 times
// •	Product 303 was sold 1 time
// •	Product 404 was sold 1 time
// Test Case 2:
// Input:
// 5
// 11 22 33 44 55
// Output:
// 11 1
// 22 1
// 33 1
// 44 1
// 55 1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int unique[100001] = {0};
    for(int i = 0; i < n; i++){
        unique[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(unique[arr[i]] > 0){
            printf("%d %d\n",arr[i],unique[arr[i]]);
            unique[arr[i]] = 0;
        }
    }
    return 0;
}