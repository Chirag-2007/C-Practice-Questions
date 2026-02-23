// A number greater than 1 that has no divisors except 1 and itself

#include<stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    bool prime = true;
    if(n <= 1){
        prime = false;
    }
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                prime = false;
                break;
            }
        }  
    }
    if(prime == true){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}