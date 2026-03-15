// Print Only the Unique Elements From the Array

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        int unique = 1;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j] && i != j){ // i != j isse to unique print hoga agar nhi lagaya to i == j ma to sare same ho janege and koi bhi print nhi hoga
                unique = 0;
                break;
            }
        }
        if(unique == 1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}