// You are given an integer array nums. The unique elements of an array are the elements that appear 
// exactly once in the array.  
// Return the sum of all the unique elements of nums.  
// Constraint: All the numbers in the array lie between 1 to 100. 
// Input format  
// An integer N  
// N elements of array  
// Output format  
// Sum of all unique elements  
// Sample Input 1:  
// 4  
// 1 2 3 2  
// Sample Output 1:  
// 4  
// Explanation: The unique elements are [1,3], and the sum is 4.  
// Sample Input 2:  
// 5  
// 1 1 1 1 1  
// Sample Output 2:  
// 0 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        int unique = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j] && i != j){
                unique = 1;
                break;
            }
        }
        if(unique == 0){
            total += arr[i];
        }
    }
    printf("%d",total);
    return 0;
}