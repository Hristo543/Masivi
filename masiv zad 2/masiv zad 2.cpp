// masiv zad 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    double n;
    printf("vuvedi n =");
    scanf_s("%lf", &n);
    double masiv[100];
    double k;
    printf("k =",&k);
    scanf_s("%lf", &k);
    double sum = 0;
    double valuest;
    int p = 0;
    for (int i = 0; i < n; i++) {
        scanf_s("%lf", &valuest);
        masiv[i] = valuest;

    }
    printf("sumirane na stoinostite");

    for (int i = 0; i < n; i++) {
        if (masiv[i] > k) {

            sum += masiv[i];
            p++;


        }
    }
        
        if (p > 0) {
            double sraritm = sum / p;
            printf("\nsum =%.2lf", sum);
            printf("\nsraritm = %.2lf", sraritm);

        }


    

}

