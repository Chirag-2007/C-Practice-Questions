// Question: Find the First Repeating Element
// Input:
// 7  
// 1 5 3 4 3 5 6
// Output:
// 5

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}