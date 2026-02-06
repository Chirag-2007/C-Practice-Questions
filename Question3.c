// Input 3 integers and print the maximum among them

# include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);
    if(x > y && x > z){
        printf("%d is maximum",x);
    }
    else if(y > x && y > z){
        printf("%d is maximum",y);
    }
    else{
        printf("%d is maximum",z);
    }
    return 0;
}