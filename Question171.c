// Q6.  Find Missing Element
// There is an array of non-negative integers. A second array is formed by shuffling the elements of the first array and deleting a random element. Given these two arrays,
// find which element is missing in the second array.
// Input
// First line of input will contain a positive integer T = number of test cases. 
// Each test case will contain 3 lines. 
// First line of each test case will contain two number m = size of the first array and n = size of the second array separated by space. 
// Next 2 lines will contain m and n space separated non-negative integers.
// Output
// For each test case, print the missing element in the second array.
// Sample Input 1:
// 1
// 5 4
// 1 2 3 4 5
// 3 4 1 2
// Sample Output 1:
// 5
// Sample Input 2:
// 3
// 5 4
// 1 2 3 4 5
// 3 4 1 2
// 6 5
// 10 20 30 40 50 60
// 20 10 60 30 40
// 4 3
// 7 8 9 10
// 8 10 7
// Sample Output 2:
// 5
// 50
// 9

#include<stdio.h>

int check(int n, int m, int arr[n], int brr[m]){
    int total_first = 0;
    int total_second = 0;
    for(int i = 0; i < n; i++){
        total_first += arr[i];
    }
    for(int i = 0; i < m; i++){
        total_second += brr[i];
    }
    int ans = total_first - total_second;
    return ans;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t > 0){
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
        }
        int brr[m];
        for(int i = 0; i < m; i++){
            scanf("%d",&brr[i]);
        }
        int result = check(n,m,arr,brr);
        printf("%d",result);
        t--;
    }
    return 0;
}