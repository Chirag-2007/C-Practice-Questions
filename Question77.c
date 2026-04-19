//Question: Find Pair With Given Sum
// Input:
// n = 6
// arr = {1, 4, 5, 6, 3, 2}
// target = 7
// Output:
// (1, 6)
// (4, 3)
// (5, 2)

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int trg;
    scanf("%d",&trg);
    int found = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == trg){
                printf("(%d, %d)\n",arr[i],arr[j]);
                found++;
            }
        }
    }
    if(found == 0){
        printf("No pair found");
    }
    return 0;
}