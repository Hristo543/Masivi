// Masivi 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	printf("vuvedi n =");
	scanf_s("%d", &n);
	double masivA[100];
	int k=0 ;
	double valuest;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		scanf_s("%lf", &valuest);
		masivA[i] = valuest;

	}
	printf("sumirane na stoinostite");
	
	for (int i = 0; i < n; i++) {
		if (masivA[i] < 0) {
			sum += masivA[i];
			k++;
		}
		
	}
	if (k > 0) {
		double sraritm = sum / k;
		printf("\nsum = %.2lf\n", sum);
		printf("sraritm =%.2lf\n", sraritm);
	
	}



	
	
	






}


