// Count Even and Odd Numbers
// Problem Statement
// Write a C program to read n integers into an array and count how many numbers are even and how many are odd.
// Display the total count of even and odd numbers separately.

// Input Format
// First line: An integer n (size of the array)
// Second line: n space-separated integers

// Output Format
// Print number of even elements
// Print number of odd elements

// Sample Input 1
// 6
// 10 23 45 8 12 7
// Sample Output 1
// Even = 3
// Odd = 3
// Sample Input 2
// 5
// 2 4 6 8 10
// Sample Output 2
// Even = 5
// Odd = 0

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count_even = 0;
    int count_odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("Even = %d\n",count_even);
    printf("Odd = %d\n",count_odd);
    return 0;
}