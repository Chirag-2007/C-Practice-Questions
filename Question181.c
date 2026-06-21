// Q8.  Perfect String
// Given a string that contains only four types of characters: a, b, x, and y.
// A string is said to be perfect if it satisfies the following conditions:
// 1. The sum of the count of a and b in the string is odd.
// 2. The sum of the count of x and y in the string is even.
// It is possible that some characters may not appear in the string.
// For example, the string "aab" is also considered perfect because:
// a_count = 2
// b_count = 1
// x_count = 0
// y_count = 0
// So,
// a_count + b_count = 2 + 1 = 3 → odd
// x_count + y_count = 0 + 0 = 0 → even
// Since both conditions are satisfied, the string is perfect.
// You need to complete the function isPerfect() which receives a string as a parameter and returns true if the string is perfect, otherwise false.
// Input Format:
// The first line contains an integer T, denoting the number of test cases.
// Each test case contains one line, which contains a string.
// Output Format:
// For each test case, print YES if the string is perfect, else print NO.
// Constraints
// 1 ≤ T ≤ 100
// 1 ≤ length of each string ≤ 10^5
// Strings contain only the letters 'a', 'b', 'x', 'y'.
// Sample Input
// 4
// xaxbyyb
// aabbxxyy
// abaabxy
// yyxaby
// Sample Output
// YES
// NO
// YES
// NO
// Explanation:
// 1 xaxbyyb
// a + b = 2 + 2 = 4 → even (Wait check carefully)
// Actually: a=1, b=2 → 3 (odd)
// x=2, y=2 → 4 (even)
// → Perfect → YES
// 2 aabbxxyy
// a + b = 2 + 2 = 4 → even
// x + y = 2 + 2 = 4 → even
// Since the first condition fails → NO
// 3 abaabxy
// a + b = 3 + 2 = 5 → odd
// x + y = 1 + 1 = 2 → even
// → Perfect → YES
// 4 yyxaby
// a + b = 1 + 1 = 2 → even
// x + y = 1 + 3 = 4 → even
// First condition fails → NO

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n > 0){
        char ch[100];
        scanf("%s",ch);
        int i = 0;
        int a_count = 0;
        int b_count = 0;
        int x_count = 0;
        int y_count = 0;
        while(ch[i] != '\0'){
            if(ch[i] == 'a'){
                a_count++;
            }
            else if(ch[i] == 'b'){
                b_count++;
            }
            else if(ch[i] == 'x'){
                x_count++;
            }
            else if(ch[i] == 'y'){
                y_count++;
            }
            i++;
        }
        if((a_count + b_count) % 2 != 0 && (x_count + y_count) % 2 == 0){
            printf("Yes");
        }
        else{
            printf("No");
        }
        n--;
    }
    return 0;
}