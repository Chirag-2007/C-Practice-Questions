 // Given a string, count the number of Vowels, Consonants, Digits, and Spaces 
// present in a string. 
// NOTE: String length will not exceed 100.  
// Input format : First line take string input 
// Output format : Print the count in the following order : 
//  vowels   
// Consonants   
// Digits   
// Spaces 
// Sample Input : 
// Ram Got 100 Marks in Hindi 
// Sample Output : 
// 6 
// 12 
// 3 
// 5 
// Explanation : 
// In given input : Ram Got 100 Marks in Hindi 
// Vowels : 6   -  a o a i i i 
// Consonants  : 12  -  R m G t M r k s n H n d 
// Digits : 3  -  1 0 0 
// Spaces : 5 – Each word is separated by 1 space.

#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    int count_vowels = 0;
    int count_consonants = 0;
    int count_digits = 0;
    int count_spaces = 0;
    for(int i = 0; i < count; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count_vowels++;
        }
        else if(str[i] == '0' ||  str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'){
            count_digits++;
        }
        else if(str[i] == ' '){
            count_spaces++;
        }
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){ // Agar vo vowels na hua to rest alphabets means consonats honge vo...
            count_consonants++;
        }
    }
    printf("%d\n",count_vowels);
    printf("%d\n",count_consonants);
    printf("%d\n",count_digits);
    printf("%d\n",count_spaces);
    return 0;
}