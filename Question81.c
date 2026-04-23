// Q Write a C Program to Count Number of Words in a String. 
// Take string size 100. 
// Input Format 
// Take Input string 
// Output Format 
// Print Number of Words in a String. 
// Sample Input 
// All the best 
// Sample Output 
// 3 

#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    int count_word = 0;
    int inWord = 0;
    int j = 0;
    while(str[j] != '\0'){
        // If character is not space and we were outside a word
        if(str[j] == ' ' && inWord == 0){
            count_word++;
            inWord = 1;
        }
        // If character is space, word ends
        else if(str[j] == ' '){
            inWord = 0;
        }
        j++;
    }
    printf("%d",count_word + 1);
    return 0;
}