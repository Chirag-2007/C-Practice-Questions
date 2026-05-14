// Anil is wondering if he can find out the sum of series using loops in C. Help him 
// write a C program to get the following sum of series up to 4 decimal places if ‘N’ is 
// being provided.
// 1- ½ + 1/3 - ¼+............... 1/N 
// Sample Input 1
// 2
// Sample Output 1
// 0.5000
// Sample Input 2:
// 4
// Sample Output 2
// 0.5833
// Input Explanation:
// The first line contains the positive integer ‘N’, where N is the number of terms in the 
// given series.
// Output Explanation:
// Print the sum of N terms in the series.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float f = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            f = f + 1.0 / i;
        }
        else{
             f = f - 1.0 / i;
        }
    }
    printf("%.4f",f);
    return 0;
}