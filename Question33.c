// Covert Celcius to Fahrenheit upto 2 decimal point

#include<stdio.h>
int main(){
    float cel;
    printf("Enter Celcius: ");
    scanf("%f",&cel);
    float fah;
    fah = (cel * 9 / 5) + 32;
    printf("Fahrenheit Value: ");
    printf("%.2f",fah); //  2 decimal tk lene ke liya...
    return 0;
}