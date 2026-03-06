// Total and average of marks of 5 students

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int total;
    float avg;
    total = a + b + c + d + e;
    avg = total / 5;
    printf("Total marks: %d\n",total);
    printf("Average Marks: %f",avg);
    return 0;
}