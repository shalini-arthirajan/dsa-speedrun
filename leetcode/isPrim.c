#include <stdio.h>

int main(){

    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if (n <= 1){
        printf("not prime");
    }

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            printf("not prime");
        }
    }

    printf("is prime");
}
