// Q 7. Question: 
// You are tasked with developing an online movie ticket booking system. The system should allow users to book seats for a movie. It maintains the total number of available seats using a static storage class variable, ensuring that the count persists across multiple function calls.
// Sample Input:
// 10 // Total Number of Seats available
// 3 // Count of customer requesting for seat booking
// 5 // Number of seats requested by customer 1
// 2 // Number of seats requested by customer 2
// 8 // Number of seats requested by customer 3

// Sample Output:
// Tickets Booked
// Tickets Booked
// Housefull

// Testcase Explanation:
// Input enters total number of seats available and second number is count of customers who will request for tickets required.
// Output Explanation
// Tickets Booked if seats requested are less than total number of seats available
// Housefull if seats requested are more than available seats. 
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
            printf("Tickets Booked\n");
        }
        else{
            printf("Housefull\n");
        }
    }
    return 0;
}