// Top 5 Videos on YouTube
// Statement:
// You want to find the top 5 videos with the highest views from a list of N videos. Write a program that takes the number of views for N videos, sorts them in descending order, and displays the top 5. If N <= 5, display all available videos.
// Sample Input and Output:
// Input:
// 7  // Total number of videos
// 5000  //Number of views for first video
// 3000  // Number of views for second video and so on..
// 1500  
// 8000  
// 1000  
// 2000  
// 4000  
// Output:
// 8000 5000 4000 3000 2000 // Top 5 videos
// Input:
// 3  
// 1000  
// 500  
// 2000  
// Output:
// 2000 1000 500
// Explanation:
// In the first example, the sorted order is [8000, 5000, 4000, 3000, 2000, 1500, 1000], with the top 5 being 8000 5000 4000 3000 2000.
// In the second example, all 3 videos are shown: [2000, 1000, 500].

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n > 5){
        for(int i = 0; i < 5; i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        for(int i = 0; i < n; i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}