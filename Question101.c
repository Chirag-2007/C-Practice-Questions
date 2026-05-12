// Given an circular array which represent a id of your company’s customers you need to decrypt  
// That data by replacing the number with sum of next 3 numbers   
// Input format  
// An integer N  
// N elements of array  
// Output format  
// Resultant array  
// Sample Input 1:  
// 5  
// 1 2 3 4 5  
// Sample Output 1:  
// 9 12 10 8 6  
// Explanation :-  
// (2+3+4) (3+4+5) (4+5+1) (5+1+2) (1+2+3)  
// 9 12 10 8 6 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int result[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        result[i] = arr[(i+1)%n] + arr[(i+2)%n] + arr[(i+3)%n];
    }
    for(int i = 0; i < n; i++){
        printf("%d ",result[i]);
    }
    return 0;
}