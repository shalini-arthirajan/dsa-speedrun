#include <stdio.h>

void reverse(int a[],int n){
    for (int i = 0; i < n/2;i++){

        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}

void rotateLeft(int a[], int n, int k){
    int temp[100];
    int j = 0;

    k = k % n;
    for (int i = k; i < n; i++){
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < k; i++){
        temp[j] = a[i];
        j++;
    }

    for (int i = 0; i < n; i++){
        a[i] = temp[i];
    }
}


for (int i =0; i < n-1; i++){

    for (int j = 0; j < n-1; j++){

        if (arr[j]> arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

int min = arr[0];

for (int i= 0; i < n; i++){
    if (arr[i] < min){
        min = arr[i];
    }
}

for (int i = 0; i < n; i++){
    if (arr[i] == search){
        found = 1;
    }
}




