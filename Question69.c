// Question: Count Frequency of Each Digit in a Number
// Input:
// A single integer n
// (Example: 12035021)
// Output:
// Digit → Frequency
// Example for 12035021:
// 0 1
// 1 2
// 2 2
// 3 1
// 5 1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 0){
        printf("0 1\n");
        return 0;
    }
    int freq[10] = {0}; // freq array ka size 10 hamesha sahi rahega because digit sirf 0–9 hote hai.Number kitne bhi digits ka ho, digit types 10 hi rehte hain.
    int num = n;
    // Frequency count karega ise digit ki and vo ose array ke index pr hogi value
    while(num > 0){
        int dig = num % 10;
        freq[dig]++;
        num = num / 10;
    }
    for(int i = 0; i < 10; i++){
        if(freq[i] > 0){
            printf("%d %d\n", i, freq[i]);
        }
    }
    return 0;
}