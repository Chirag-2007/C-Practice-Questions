// Search an element in array (linear search)

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    return 0;
}