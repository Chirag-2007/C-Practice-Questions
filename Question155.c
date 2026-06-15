// Q15.  Triangle Classification using Switch-Case
// Given three sides of a triangle, classify it as:
// • Equilateral: All three sides are equal
// • Isosceles: Exactly two sides are equal
// • Scalene: All three sides are different
// Additionally, verify that the given sides can form a valid triangle using the triangle inequality theorem: The sum of any two sides must be
// greater than the third side.
// Input Format
// Three space-separated integers: side1 side2 side3 (sides of the triangle)
// Output Format
// Print one of the following:
// Equilateral Triangle
// Isosceles Triangle
// Scalene Triangle
// Not a Valid Triangle (if triangle inequality is violated)
// Sample Test Case
// Input:
// 5 5 5
// Output:
// Equilateral Triangle
// Explanation: All three sides are equal

// Method 1

#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int arr[3];
    if(x + y > z && y + z > x && x + z > y){
        if(x == y && y == z && x == z){
        printf("Equilateral Triangle");
        }
        else if(x != y && y != z && x != z){
            printf("Scalene Triangle");
        }
        else{
            arr[0] = x, arr[1] = y, arr[2] = z;
            int count = 0;
            for(int i = 0; i < 3; i++){
                for(int j = i + 1; j < 3; j++){
                    if(arr[i] == arr[j]){
                        count++;
                    }
                }
            }
            if(count == 1){
                printf("Isosceles Triangle");
            }
        }
    }
    else{
        printf("Not a Valid Triangle");
    }
    return 0;
}

// Method 2

#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if(x + y > z && y + z > x && x + z > y){

        int type;

        if(x == y && y == z)
            type = 1;
        else if(x == y || y == z || x == z) // Isosceles Triangle condition...
            type = 2;
        else
            type = 3;

        switch(type){
            case 1:
                printf("Equilateral Triangle");
                break;
            case 2:
                printf("Isosceles Triangle");
                break;
            case 3:
                printf("Scalene Triangle");
                break;
        }
    }
    else{
        printf("Not a Valid Triangle");
    }

    return 0;
}