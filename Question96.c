// Given an array print the maximum value.
// Input Format 
// First line contains integer n as size of array. Next n lines contains a single integer as 
// element of array. 
// Constraints 
// N cannot be Negative.  
// Range of Numbers can be between -1000000000 to 1000000000 
// Output Format 
// Print the required output. 
// Sample Input 
// 4 
// 2 
// 8 
// 6 
// 4 
// Sample Output 
// 8 
// Explanation 
// Arrays= {2, 8, 6, 4} => Max value = 8

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max_val = arr[0];
    for(int i = 1; i < n; i++){
        if(max_val < arr[i]){
            max_val = arr[i];
        }
    }
    printf("%d",max_val);
    return 0;
}