// Missing Number
// Input:
// 4
// 1 2 4 5
// Output → 3

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[50];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int total = (n + 1) * (n + 2) / 2; // size is +1 than the size of array as 1 element is missing the the array from 1 to n...
    int arr_sum = 0;
    for(int j = 0; j < n; j++){
        arr_sum += arr[j];
    }
    int missing_num = total - arr_sum;
    printf("%d",missing_num);
    return 0;
}