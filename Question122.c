// Question 4: California Fire Report
// Statement:
// Firefighters in California log fire reports daily, including the number of active fires. Write a program to count how many days had more than X fires. The program should accept:
// The number of days, N (where N>0).
// The threshold value, X.
// The number of fires for each day.
// Print the count of days exceeding the threshold. Use a while loop for the implementation. If input is not valid as mention above print “Invalid Input”.
// Sample Input and Output:
// Input:
// 5  
// 50  
// 40  
// 60  
// 30  
// 70
// 20  
// Output:
// 2
// Input:
// 3  
// 25  
// 10  
// 20  
// 30  
// Output:
// 1
// Explanation:
// In the first example, two days (60, 70) exceed the threshold of 50.
// In the second example, only one day (30) exceeds the threshold of 25.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid Input");
        return 0;
    }
    int x;
    scanf("%d",&x);
    int count = 0;
    while(n > 0){
        int val;
        scanf("%d",&val);
        if(val > x){
            count++;
        }
        n--;
    }
    printf("%d",count);
    return 0;
}