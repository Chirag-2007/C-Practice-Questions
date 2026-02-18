// Input an integer N and check whether its digits are in increasing order or not

//Input: 1234
// Digits: 1 < 2 < 3 < 4
// Output: Increasing

// Input: 1429
// Digits break at 4 > 2
// Output: Not Increasing

#include<stdio.h>
#include <stdbool.h> // If we want a boolean value...
int main(){
    int n;
    scanf("%d",&n);
    int val = n;
    int count = 0;
    while(n > 0){
        count++;
        n = n / 10;
    }
    int arr[count];
    for(int i = count-1; i >= 0; i--){
        int dig = val % 10;
        arr[i] = dig;
        val = val / 10;
    }
    bool increase = true;
    for(int i = 0; i < count; i++){
        for(int j = i + 1; j < count; j++){
            if(arr[i] > arr[j]){
                increase = false;
                break;
            }
        }
    }
    if(increase == true){
        printf("Increasing");
    }
    else{
        printf("Not Increasing");
    }
    return 0;
}