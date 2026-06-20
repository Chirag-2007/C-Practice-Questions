// Q12.  Given amount, count notes in it
// Write a program that accepts an integer amount from the user and determines the minimum number of currency notes (2000, 500, 100, 50, 20, 10, 5, 2, 1) required to
// make that amount using Indian currency denominations.
// Available Denominations:
// The available denominations are:
// 2000, 500, 100, 50, 20, 10, 5, 2, 1
// Input Format:
// A single integer representing the amount.
// Output Format:
// Print nine space-separated integers.
// Each integer represents the number of notes required for the corresponding denomination in the following order:
// 2000 500 100 50 20 10 5 2 1
// Do not print any extra spaces.
// Sample Input
// 2050
// Sample Output
// 1 0 0 1 0 0 0 0 0
// Explanation:
// 1 note of 2000 and 1 note of 50 is required, so print 1 at those places and print 0 on other denominations

#include<stdio.h>
int main(){
    int arr[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
    int amount;
    scanf("%d",&amount);
    int note_used[9];
    for(int i = 0; i < 9; i++){
        note_used[i] = amount / arr[i];
        amount = amount % arr[i];
    }   
    for(int i = 0; i < 9; i++){
    if(i == 8){
        printf("%d", note_used[i]);
    }
    else{
        printf("%d ", note_used[i]);
    }
}
    return 0;
}