#include <stdio.h>

int main(){

    int n;
    int isPrime = 1;
    printf("enter a number:");
    scanf("%d",&n);

    if (n == 1){
        isPrime = 0;
    }


    for (int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = 0;
        }
    }

    if (isPrime){
        printf("is prime");
    }else{
        printf("not prime");
    }



}
