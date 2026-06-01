// Q5.  Library Fine
// A library charges a fixed fine based on the number of late days (not per day).
// The fine rules are:
// Late Days Fine(RS)
// 1 – 3 days 10
// 4 – 10 days 20
// 11 – 30 days 50
// More than 30 days Membership cancelled
// The fine is applied once according to the range, not multiplied by number of days.
// Task
// Write a program that reads the number of days a book is returned late and prints the applicable fine or the cancellation message.
// Input
// An integer n (n ≥ 1) representing late days.
// Output
// Print the fine amount if n ≤ 30
// Print Membership cancelled if n > 30
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
    int days;
    scanf("%d",&days);
    if(days > 30){
        printf("Membership cancelled");
    }
    else{
        if(days >= 1 && days <= 3){
            printf("%d",10);
        }
        else if(days >= 4 && days <= 10){
            printf("%d",20);
        }
        else{
            printf("%d",50);
        }
    }
    return 0;
}