// Reverse the Array -->

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int t = 0; t < n; t++){
        scanf("%d",&arr[t]);
    }
    int i = 0;
    int j = n - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int k = 0; k < n; k++){
        printf("%d ",arr[k]);
    }
    return 0;
}