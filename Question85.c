// Calculate the length of string

#include<stdio.h>
int main(){
    char name[] = "Chirag Nagpal";
    int i = 0;
    int count = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}

// Find character in string

#include<stdio.h>
int main(){
    char name[] = "Ayush";
    int i = 0;
    char ch = 'u';
    while(name[i] != '\0'){
        if(name[i] == ch){
            printf("Yes");
            return 0;
        }
        i++;
    }
    printf("No");
    return 0;
}

// String In-built functions -->

// strlen() --> Length
// strcpy() --> Copy
// strcat() --> Concartnate
// strcmp() --> Compare
// strchr() --> Find character
// strstr() --> Find substring
// strtok() --> Split string