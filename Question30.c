// Problem Statement 2: A manufacturing company has classified its executives into four levels for the benefit of certain perks. The levels and corresponding perks are shown below:
//      Level	                    Perks
// 	            Conveyance allowance	Entertainment allowance
//      1	            1000	                    500
//      2	            750	                        200
//      3	            500	                        100
//      4	            250                     	____

// An executive’s gross salary includes basic pay, house rent allowance at 25% of basic pay and other perks. 
// Write a program that will read an executive’s level number, and basic pay and then compute the Gross Salary.
// Input Format
// Input contains the level number, and basic pay
// Output Format
// basic pay + house rent allowance + perks
// Sample Input
// 1
// 500
// Sample Output
// 2125.000000

#include<stdio.h>
int main(){
    int level;
    float baseSalary,allowance,entertainment,total,rent;
    scanf("%d",&level);
    scanf("%f",&baseSalary);
    if(level == 1){
        allowance = 1000;
        entertainment = 500;
        total = allowance + entertainment;
    }
    else if(level == 2){
        allowance = 750;
        entertainment = 200;
        total = allowance + entertainment;
    }
    else if(level == 3){
        allowance = 500;
        entertainment = 100;
        total = allowance + entertainment;
    }
    else if(level == 4){
        allowance = 250;
        entertainment = 0;
        total = allowance + entertainment;
    }
    rent = 0.25*baseSalary;
    float grossSalary = baseSalary + rent + total;
    printf("%f",grossSalary);
    return 0;
}