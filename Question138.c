// Q10.  Profit and Loss
// If cost and selling price of an item is entered through the keyboard. Write a program to find how much profit/ loss is made on that item.
// Input Format
// Each test case contains 2 values ( first is cost price and second is selling price), in two separate lines. 
// Output Format
// Print "Profit" in the first line and profit amount in the second line if profit is made, 
// "Loss" in the first line and loss amount in the second line for loss and 
// "No Profit No Loss" otherwise.
// Sample Input 1
// 500
// 550 
// Sample Output 1
// Profit
// 50
// Sample Input 2
// 500
// 500 
// Sample Output 2
// No Profit No Loss

#include<stdio.h>
int main(){
    int cp, sp;
    scanf("%d %d",&cp, &sp);
    if((sp - cp) > 0){
        printf("Profit\n");
        printf("%d",sp - cp);
    }
    else if((sp - cp) < 0){
        printf("Loss\n");
        printf("%d",cp - sp);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}