// Reverse words in a sentence --> Important Question
// Input: "I love coding" → Output: "coding love I"

#include<stdio.h>
#include<string.h>

void reverse(char str[], int i, int j){
    while(i < j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;  
        i++;
        j--;
    }
}

int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int n = strlen(str);
    // STEP 1: Reverse entire string
    reverse(str, 0, n - 1);
    // STEP 2: Reverse each word
    int i = 0;
    while(i < n){
        if(str[i] == ' '){
            i++;
            continue;
        }
        int start = i;
        // Move to end of word
        while(i < n && str[i] != ' '){
            i++;
        }
        int end = i - 1;
        // Reverse this word
        reverse(str, start, end);
    }
    printf("%s\n",str);
    return 0;
}