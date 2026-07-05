// Problem Statement 65
// Karan wants to compare static and auto variables
// Write a program that:
// ● Uses static and auto
// ● Calls function twice
// ● Prints values
// Sample Test Case 1
// Input:
// (no input)
// Output:
// 1 1
// 2 1
// Sample Test Case 2
// Input:
// (no input)
// Output:
// 1 1
// 2 1

#include <stdio.h>

void func(){
    static int s = 0;
    auto int a = 0;
    s++;
    a++;
    printf("%d %d\n", s, a);
}

int main() {
    func();
    func();
    return 0;
}
