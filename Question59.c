// Find Length of String (WITHOUT strlen())

#include<stdio.h>
int main(){
    char str[15]; // we have to initialize the length of the string as we are using string as a character array...
    scanf("%[^\n]s",str); // Multiple characters lene ke liya...
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}