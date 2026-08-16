#include <stdio.h>

int main(){
    printf("enter a number to reverse:");
    int n;
    scanf("%d",&n);

    int rev = 0;
    while (n > 0){
        int digit = n % 10;
        rev = rev*10 + digit;
        n /= 10;
    }

    printf("reversed number: %d", rev);
}
