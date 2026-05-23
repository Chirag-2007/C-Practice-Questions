// Problem Statement 2: Mobile bill Calculation
// Develop a program that calculate the monthly mobile bill. The program should take two integer inputs: i) total number of call consumed, ii) total number of sms. Further, consider the following conditions to compute the total mobile bill. 

// Conditions:
// -Fixed rent=100
// -Call charges:
// First 50 calls free 
// 50 <=Calls <=100, the rate is Rs. 0.80/call.
// 100 <Calls <=200, the rate is Rs. 0.50/call.
// Calls>200, the rate is Rs. 0.10/call.
// -SMS charges:
// 	First 100 messages are free
// And for messages>100, the rate is Rs. 0.50/sms
// -An additional surcharge of 10% is added to the total bill 

// Input format:
// First line of input contains the total number of calls.
// Second line of input contains the total number of sms.

// Constraints:
// 0<= calls, sms<= 10000
// Output format:
// Print the total billed amount upto two decimal point

// Sample Input:
// 150
// 80
// Sample Output:
// 181.50       

#include<stdio.h>
int main(){
    int call;
    scanf("%d",&call);
    int sms;
    scanf("%d",&sms);
    float call_charge;
    if(call <= 50){
        call_charge = 0;
    }
    else{
        if(call >= 50 && call <= 100){
            call_charge = (call - 50) * 0.80;
        }
        else if(call > 100 && call <= 200){
            call_charge = 40 + (call - 100) * 0.50;
        }
        else{
            call_charge = 40 + 50 + (call - 200) * 0.10;
        }
    }
    float sms_charge;
    if(sms <= 100){
        sms_charge = 0;
    }
    else{
        sms_charge = (sms - 100) * 0.50;
    }
    float call_sms = 100 + call_charge + sms_charge;
    float surcharge = call_sms * 0.10;
    float total = call_sms + surcharge;
    printf("%.2f",total);
    return 0;
}