// Removal of Duplicates from a Sorted Array --> IMPORTANT QUESTION
// Sample Input
// 5  // No. of elements
// 1
// 1
// 2
// 3
// 3

// Sample Output
// 1
// 2
// 3

#include<stdio.h>

void removeDuplicates(int arr[], int *size){
    int newSize = 0;
    for(int i = 0; i < *size; i++){
        int isDuplicate = 0;
        for(int j = 0; j < newSize; j++){
            if(arr[j] == arr[i]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0){
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *size = newSize;
}

int main(){
    int i, size = 0;
    scanf("%d",&size);
    int arr[size];
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}