// Power calculator without recursion
// Jia needs to calculate X raised to the power Y (X^Y). Write a program that calculates X^Y.
// Input Format:
// • Two space-separated integers X and Y (0 ≤ X ≤ 10, 0 ≤ Y ≤ 10)

// Output Format:
// • A single integer representing X^Y.
// Sample Test Case 1
// Input: 2 3
// Output: 8
// Sample Test Case 2
// Input: 5 0
// Output: 1

#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int prd = 1;
    if(n == 0){
        prd = 0;
    }
    else if(m == 0){
        prd = 1;
    }
    else{
        for(int i = 1; i <= m; i++){
            prd = prd * n;
        }
    }
    printf("%d", prd);
    return 0;
}