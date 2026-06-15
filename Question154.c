// Q14.  Age Comparison and Sorting
// Write a program that accepts the ages of three people and performs the following tasks:
// 1. Identify the youngest age among the three inputs.
// 2. Check for duplicates: Determine if the youngest age is shared by more than one person.
// 3. Sort the ages: Arrange all three ages in ascending numeric order.
// Input Format
// Three space-separated integers representing the ages of three people: age1 age2 age3
// Output Format
// Line 1:
// If the youngest age is unique, print Youngest: X
// If two or more people share the youngest age, print Youngest: X (Multiple)
// Note (where X is the age)
// Line 2:
// Print the ages in ascending order, preceded by the label Ages in order: A B C
// Sample Test Case 1
// Input:
// 25 30 20
// Output:
// Youngest: 20
// Ages in order: 20 25 30
// Explanation: 20 is the youngest, sorted order is 20, 25, 30
// Sample Test Case 2
// Input:
// 25 20 20
// Output:
// Youngest: 20 (Multiple)
// Ages in order: 20 20 25
// Explanation: 20 is the youngest and occuring multiple times, sorted order is 20, 20, 25

#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int youngest;
    if(x < y && x < z){
        youngest = x;
    }
    else if(y < x && y < z){
        youngest = y;
    }
    else{
        youngest = z;
    }
    int arr[3];
    arr[0] = x, arr[1] = y, arr[2] = z;
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if(arr[i] == arr[j]){
                count++;                    
            }
        }
    }
    printf("Youngest: %d",youngest);
    if(count > 0){
        printf(" (Multiple)\n");
    }
    else{
        printf("\n");
    }
    printf("Ages in order: ");
    for(int i = 0; i < 3; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}