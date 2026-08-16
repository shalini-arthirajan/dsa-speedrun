#include <stdio.h>
#include <math.h>

int main(){

    int isPow = 0;
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);

    for (int i = 0; i < y; i++){
        if (pow(x,i) == y){
            isPow = 1;
        }
    }

    if (isPow){
        printf("%d is a power of %d",y,x);
    }else{
        printf("%d is not a power of %d",y,x);
    }

}
