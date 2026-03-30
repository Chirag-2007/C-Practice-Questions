// Simple Calculator (Switch Case)

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    char op;
    scanf(" %c",&op); // “ ” (leading space) means → ignore all whitespace before reading actual character.
    switch(op){
        case '+':
            printf("%d",x + y);
            break;
        case '-':
            printf("%d",x - y);
            break;
        case '*':
            printf("%d",x * y);
            break;
        case '/':
            if(y == 0){
                printf("Cannot divide by zero");
            } 
            else {
                printf("%d", x / y);
            }   
            break;
        default:
        printf("Invalid Operator");   
    }
    return 0;
}