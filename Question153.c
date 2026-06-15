// Q13.  Traffic Penalty Calculator
// A traffic management system calculates penalties based on vehicle speed and environmental conditions. Your task is to implement a penalty
// calculation system that considers multiple factors.
// Penalty Rules:
// • Speed ≤ 60 km/h: No fine
// • Speed 61-80 km/h: ₹500 fine
// • Speed 81-100 km/h: ₹2000 fine
// • Speed > 100 km/h: License suspension (no monetary fine)
// Special Condition:
// If the violation occurs at night AND during rain, add ₹1000 to the monetary fine (does not apply to license suspension cases).
// Input Format
// First line: Integer speed (vehicle speed in km/h)
// Second line: Integer isNight (1 for night, 0 for day)
// Third line: Integer isRaining (1 for raining, 0 for not raining)
// Output Format
// Print one of the following:
// No Fine (if speed ≤ 60)
// Fine: ₹X (where X is the calculated fine amount)
// License Suspended (if speed > 100)
// Sample Test Cases
// Test Case1: Normal Day Speeding
// Input:
// 70
// 0
// 0
// Output:
// Fine: ₹500
// Explanation: Speed is 70 km/h (61-80 range), daytime, not raining → ₹500 fine
// Test Case2 : Night + Rain Speeding
// Input:
// 75
// 1
// 1
// Output:
// Fine: ₹1500
// Explanation: Speed is 75 km/h (₹500 base fine) + night + rain → ₹500 + ₹1000 = ₹1500

#include<stdio.h>
int main(){
    int speed, isNight, isRain;
    scanf("%d",&speed);
    scanf("%d",&isNight);
    scanf("%d",&isRain);
    int fine;
    if(speed <= 60){
        printf("No Fine");
        return 0;
    }
    else if(speed >= 61 && speed <= 80){
        fine = 500;
    }
    else if(speed >= 81 && speed <= 100){
        fine = 2000;
    }
    else{
        printf("License Suspended");
        return 0;
    }
    if(isNight == 1 && isRain == 1){
        fine = fine + 1000;
    }
    printf("Fine: %d",fine);
    return 0;
}