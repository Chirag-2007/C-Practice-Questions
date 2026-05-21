// CLASS GRADE
// A student's percentage is entered by the user.
// Write a C program using if–else to display the grade based on the following criteria:

// Percentage      Grade
// ≥ 90            A
// ≥ 75 and < 90   B
// ≥ 60 and < 75   C
// ≥ 40 and < 60   D
// < 40            Fail

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n >= 90){
        printf("A");
    }
    else if(n >= 75 && n < 90){
        printf("B");
    }
    else if(n >= 60 && n < 75){
        printf("C");
    }
    else if(n >= 40 && n < 60){
        printf("D");
    }
    else{
        printf("Fail");
    }
    return 0;
}