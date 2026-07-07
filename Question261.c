// Q9. Problem Statement 
// Mr. Ramesh, an encoder, needs assistance in developing a C program to generate a password based on the addition of the 
// differences between successive elements of a user-input array. As a programmer, you are tasked with helping Mr. Ramesh develop 
// this program. 
 
// Question: 
// Design a C program that takes input from the user for a 5-element array and generates a password based on the addition of the 
// differences between successive elements (result should be positive integer, if negative then convert it into positive integer) using 
// pointer. The password is addition of cube of each digit of the result. The program should perform the following steps: 
 
// 1. The user inputs 5 integers to populate the array. 
// 2. Calculate the differences between successive elements of the array. 
// 3. Calculate the sum of these differences. If calculated sum is negative then convert it into positive number. 
// 4. Generate a password based on the sum obtained in step 3, which is addition of cube of each digit of the sum (in step 3). 
 
// Use appropriate data types and functions to implement the required functionality. 
 
// Program template is as follows: 
// // Function to calculate the sum of differences between successive elements 
// int calculatePassword(int arr[], int size){

// }
 
// int main() { 
//     // Calculate the password 
//     int password = calculatePassword(arr, 5);
 
// return 0; 
//     } 
 
// Input: 
// 5 9 11 9 5 // Single line input consists of 5 elements. 
// Output Format: 
// 0     // Calculated password

// Constraints: 
// Range of Integer

#include<stdio.h>
#include<math.h>
#include<limits.h>

int password(int arr[], int size){
    int sum = 0, pass=0, sumT, digR; 
    for(int i = 0; i < size - 1; i++) { 
        sum += *(arr + i + 1) - *(arr + i); 
    }
    if (sum < 0){
        sum = sum* - 1;
    }
    sumT = sum;
    while(sumT > 0){ 
        digR = sumT % 10; 
        sumT = sumT / 10;
        pass += pow(digR, 3); 
    } 
    return pass; 
}

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    int pass = password(arr, 5);
    printf("%d",pass);
    return 0;
}