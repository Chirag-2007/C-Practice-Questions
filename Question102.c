// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits. 
// Constraints 
// 0 < N <= 1000000000 
// Sample input 
// 3526 
// Sample Output 
// 11 
// 5
// Explanation 
// 6 is present at 1st position, 2 is present at 2nd position, 5 is present at 3rd position 
// and 3 is present at 4th position.

// Sum of odd placed digits on first line. 6 and 5 are placed at odd position. Hence odd 
// place sum is 6+5=11 

// Sum of even placed digits on second line. 2 and 3 are placed at even position. Hence 
// even place sum is 2+3=5 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int val = n;
    int count = 0;
    int even_num = 0;
    int odd_num = 0;
    while(val > 0){
        count++;
        val = val / 10;
    }
    for(int i = 1; i <= count; i++){
        int dig = n % 10;
        if(i % 2 == 0){
            even_num = even_num + dig;
        }
        else{
            odd_num = odd_num + dig;
        }
        n = n / 10;
    }
    printf("%d\n",odd_num);
    printf("%d",even_num);
    return 0;
}