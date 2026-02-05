// Input two integers and print the greater one.

    #include<stdio.h>
    int main(){
        int x;
        scanf("%d",&x);
        int y;
        scanf("%d",&y);
        if(x > y){
            printf("%d is greater",x);
        }
        else if (x == y){
            printf("%d and %d are equal",x,y);
        }
        else{
            printf("%d is greater",y);
        }
        
        return 0;
    }