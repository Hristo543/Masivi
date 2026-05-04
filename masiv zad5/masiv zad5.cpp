// masiv zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
int main()
{
    int n;
    printf("vuvedi n =");
    scanf_s("%d", &n);
    int masiv[100];
    int k = 0;
    int sum = 0;
    int valuest;

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &valuest);
        masiv[i] = valuest;

    }
    printf("sumirane na stoinostite");

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += masiv[i];
            k++;
        }
    }

    if (k > 0) {
        double sraritm = sum / k;
        printf("\nsum =%.2lf", sum);
        printf("\nsraritm = %.2lf", sraritm);

    }
}
