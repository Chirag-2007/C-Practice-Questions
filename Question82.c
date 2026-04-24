// Pass --> total marks
// 2 subjects fail --> print Re-appear in 1 or 2 subjects
// more than 2 subjects --> Fail

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i = 0; i < n; i++){
        scanf("%f",&arr[i]);
    }
    int count_fail = 0;
    int count_pass = 0;
    float add_pass = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 50){
            count_pass++;
            add_pass += arr[i];
        }
        else{
            count_fail++;
        }
    }
    if(count_pass == n){
        printf("%.2f",add_pass);
    }
    else if(count_fail == 1){
        printf("Re-appear in 1 subjects");
    }
    else if(count_fail == 2){
        printf("Re-appear in 2 subjects");
    }
    else{
        printf("Fail");
    }
    return 0;
}