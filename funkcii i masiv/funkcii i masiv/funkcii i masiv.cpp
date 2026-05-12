// Predavane na masiv kato parametyr na funkciq funciqta reverse printira v obraten red . Masiva e relizariziran  v meina .
#include <iostream>
#include <stdio.h>
#include <math.h>
const int size = 5;
void Reverse(const int size, int arr[5]);

int main()
{
    int arr[size];
    int value;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &value);
        arr[i] = value;
    }
    for (int i = 0; i < size; i++) {
        printf("\narr[%d]=%d", i, arr[i]);
    }
    Reverse(size, arr);
        
}
void Reverse(const int size, int arr[5]) {
    for (int i = size - 1; i >= 0; i--) {
        printf("\narr[%d]=%d", i, arr[i]);
        
    }
}
