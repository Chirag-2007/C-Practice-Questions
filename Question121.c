// Calculate Total YouTube Revenue
// Statement:
// A YouTuber earns revenue based on the number of views for their videos. Write a program to calculate the total revenue earned from N videos. Each video earns 0.05 per view. Use a while loop to input the views for each video and calculate the total revenue.
// If the input is invalid (e.g., negative or zero videos), print "Invalid Input". 
// Output should be printed up to two decimal places.
// Sample Input and Output:	
// Input:	
// 3  
// 1000  
// 2000  
// 1500  
// Output:
// 225.00	
// Input:	
// 2  
// 3000  
// 4000  
// Output:
// 350.00
// Explanation:	
// In the first example, the YouTuber uploads three videos with views of 1000, 2000, and 1500. The revenue is calculated as:
// (1000 × 0.05) + (2000 × 0.05) + (1500 × 0.05) = 225.00
// In the second example, the revenue for two videos with 3000 and 4000 views is:
// (3000 × 0.05) + (4000 × 0.05) = 350.00

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid Input");
        return 0;
    }
    float val;
    while(n > 0){
        float x;
        scanf("%f",&x);
        val = val + 0.05 * x;
        n--;
    }
    printf("%.2f",val);
    return 0;
}