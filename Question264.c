// Write a C program to find the frequency of each character in a string.

#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]",str);
    int i = 0, count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    char unique[50];
    int k = 0;
    for(int i = 0; i < count; i++){
        int found = 0;
        for(int j = 0; j < k; j++){
            if(str[i] == unique[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            unique[k++] = str[i];
        }
    }
    unique[k] = '\0';
    for(int i = 0; i < k; i++){
        int freq = 0;
        for(int j = 0; j < count; j++){
            if(unique[i] == str[j]){
                freq++;
            }
        }
        printf("%c -> %d\n",unique[i], freq);
    }
    return 0;
}