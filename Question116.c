// Problem Statement 1: Exam Result Analysis
// You are tasked with developing a program that analysis students' exam results. The program should take two integer inputs: the total marks obtained by a student and the maximum marks. Implement the following logic:

//    - If the obtained marks are less than the passing mark, which is 40 percent of the maximum marks, then print "Fail".
//    - If the obtained marks are equal to or greater than the passing mark, check the percentage obtained. 

// If the percentage is greater than 90%, print "Excellent"; 
// if percentage in between 75% and 90% (both inclusive), print "Good"; 
// if percentage in between 50% and 74% (both inclusive), print "Average"; and 
// if percentage less than 50%, print "Below Average"

// Input format:
// First line of the input contains obtained marks as obtMarks
// Second line of the input contains passing marks as maxMarks
// Constraints:
// 1. 0 <= obtMarks, maxMarks<=100
// 2. obtMarks<=maxMarks

// Output format:
// Print the text message exactly same, given in the problem statement
// Sample Input:
// 40
// 50
// Sample Output:
// Good

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n > 100 || n < 0 || m > 100 || m < 0){
        return 0;
    }
    if(m == 0){
        return 0;
    }
    float pass_percent = (m * 40.0) / 100;
    if(n < pass_percent){
        printf("Fail");
    }
    else{
        float percent = (n * 100.0) / m ;
        if(percent > 90){
            printf("Excellent");
        }
        else if(percent >= 75 && percent <= 90){
            printf("Good");
        }
        else if(percent >= 50 && percent <= 74){
            printf("Average");
        }
        else{
            printf("Below Average");
        }
    }
    return 0;
}