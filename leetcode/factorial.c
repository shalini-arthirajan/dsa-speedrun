#include <stdio.h>

int main(){

    int n;
    printf("enter a number");
    scanf("%d",&n);

    if (n < 0){
        printf("factorial not defined for negative numbers");
    }

    long long fact = 1;

    for (int i = 1; i <= n; i++){
        fact = fact*i;
    }

    printf("factorial of %d is %lld\n",n,fact);

}
