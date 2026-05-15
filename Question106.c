// C countries participated in an event that happened in April of 2021 and 2022 in Dubai. There were K categories in which Gold, Silver and Bronze prizes were given to the participants.
// Given a country number and a type of medal, write a C program to find the total number of medals of the required type won by the given country in the years 2021 and 2022 combined.

// Hint: Use the concept of Matrix Addition.

// Input Format:
// The first line contains three positive integers C, N and M where:

// * C is the number of countries that participated in the event.
// * N is the country number whose total medals are to be calculated.
// * M is the medal type whose total is to be calculated.

// The second line contains 3C space separated integers representing the medal counts for the year 2021.

// The third line contains 3C space separated integers representing the medal counts for the year 2022.

// Note:

// * N = 1 means country number 1, N = 2 means country number 2 and so on.
// * M = 1 means Gold medal
// * M = 2 means Silver medal
// * M = 3 means Bronze medal

// Sample Input:
// 3 2 1
// 12 1 10 10 4 5 5 12 18
// 10 6 5 12 4 1 18 1 8

// Sample Output:
// 22

// Explanation:
// In the sample input, 3 countries participated in the event. We need to calculate the total Gold medals (M = 1) won by country number 2.

// Medal counts for 2021:
// Country 1 → 12 Gold, 1 Silver, 10 Bronze
// Country 2 → 10 Gold, 4 Silver, 5 Bronze
// Country 3 → 5 Gold, 12 Silver, 18 Bronze

// Medal counts for 2022:
// Country 1 → 10 Gold, 6 Silver, 5 Bronze
// Country 2 → 12 Gold, 4 Silver, 1 Bronze
// Country 3 → 18 Gold, 1 Silver, 8 Bronze

// Total Gold medals won by Country 2:
// 10 + 12 = 22

#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int arr[x][3];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < 3; j++){
           scanf("%d",&arr[i][j]); 
        }
    }
    int brr[x][3];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < 3; j++){
           scanf("%d",&brr[i][j]); 
        }
    }
    int total = arr[y-1][z-1] + brr[y-1][z-1];
    printf("%d",total);
    return 0;
}