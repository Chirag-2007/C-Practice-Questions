// Q6.  Library Fine
// A library charges a fine for every book returned late. For first 3 days the fine is 10 rupees, for 4-10 days fine is 20 rupees and above 10 days fine
// is 50 rupees. If book is returned after 30 days membership will be cancelled.
// Write a program that will receive the number of days the member is late to return the book as input and display the fine or the appropriate
// message.
// Input
// Each test case will contain a number n where n>=1.
// Output
// Print the fine amount if no of late days is less than equal to 30 and “Membership cancelled” otherwise.
// Sample Input 1
// 31
// Sample Output 1
// Membership cancelled
// Sample Input 2
// 12
// Sample Output 2
// 50

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fine;
    if(n <= 3){
        fine = 10;
        printf("%d",fine);
    }
    else if(n >= 4 && n <= 10){
        fine = 20;
        printf("%d",fine);
    }
    else if(n > 30){
        printf("Membership cancelled");
    }
    else{
        fine = 50;
        printf("%d",fine);
    }
    return 0;
}