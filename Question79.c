// Inserting Element in array

#include<stdio.h>
int main(){
    int n, pos, elm;
    scanf("%d",&n);
    int arr[n + 1]; // extra space for insertion
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position at which the element get add: ");
    scanf("%d",&pos);
    printf("Enter the element to add at the position: ");
    scanf("%d",&elm);
    for(int i = n - 1; i >= pos; i--){ // Shifting must happen from end to position, backwards
        arr[i + 1] = arr[i];
    }
    arr[pos] = elm;
    n = n + 1;
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}