// Q13. Problem Statement: 
// Write a C program using concept of arrays that allows you to enter records of students, input their name, roll number, and marks 
// for three subjects, and then calculates the average marks for each student and display it.

#include<stdio.h>

struct student{
    char name[50];
    int rollno;
    float marks[3];
    float averageMarks;
};

int main(){
    struct student s[50];
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].rollno);
        for(int j = 0; j < 3; j++){
            scanf("%f",&s[i].marks[j]);
        }
    }
    for(int i = 0; i < n; i++){
        float totalMarks = 0.0;
        for(int j = 0; j < 3; j++){
            totalMarks += s[i].marks[j];
        }
        s[i].averageMarks = totalMarks / 3.0;
    }
    for(int i = 0; i < n; i++){
        printf("%.2f\n",s[i].averageMarks);
    }
    return 0;
}