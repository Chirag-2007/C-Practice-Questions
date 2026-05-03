// strlen() --> Length
// strcpy() --> Copy
// strcat() --> Concartnate
// strcmp() --> Compare
// strchr() --> Find character
// strstr() --> Find substring
// strtok() --> Split string

// String Length -->

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int val = strlen(str);
    printf("%d",val);
    return 0;
}

// String Copy -->

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char word[50];
    scanf("%[^\n]s",str);
    strcpy(word, str); // destionation, source
    printf("%s",word);
    return 0;
}

// String Concartinate -->

#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    strcat(str1, str2);
    printf("%s",str1);
    return 0;
}

// String Compare --> Important Function
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    char str2[100];
    fgets(str2, sizeof(str2), stdin);
    if(strcmp(str1, str2) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}