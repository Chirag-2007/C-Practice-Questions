// Online Event Registration
// Create a c program to devise a solution for online event registration system. The system should allow users to register for a event. It maintains the total number of available seats using a static storage class variable, ensuring that the count persists across multiple function calls.
// Sample Input:
// 10 // Total Number of total Seats available
// 3 // Count of teams requesting for registration 
// 5 // Number of students in team 1
// 2 // Number of students in team 2
// 8 // Number of students in team 3

// Sample Output:
// Registration Successful
// Registration Successful
// Sorry all seats are booked

// Testcase Explanation:
// Input enters total number of seats available and second number is count of customers who will request for tickets required.
// Output Explanation
// Registration Successful if seats requested are less than total number of seats available
// Sorry all seats are booked if seats requested are more than available seats. 
// Invalid Input if seats requested are <0

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < x; i++){
        if(arr[i] < 0){
            printf("Invalid Input");
            return 0;
        }
        total += arr[i];
        if(total <= n){
            printf("Registration Successful\n");
        }
        else{
            printf("Sorry all seats are booked\n");
        }
    }
    return 0;
}