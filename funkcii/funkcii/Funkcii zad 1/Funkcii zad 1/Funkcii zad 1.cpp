// Funkcii zad 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
int pravoug(int a, int b);
double triug(double a, double b,double c);
bool iftriugulnic(int a, int b, int c);
float kvadrat(float a);
int romb(int a, int h);
int main()
{
	int a;
	int b;
	int c;
	int h;
	printf("a =");
	scanf_s("%d", &a);
	printf("b =");
	scanf_s("%d", &b);
	printf("c =");
	scanf_s("%d", &c);
	printf("h =");
	scanf_s("%d", &h);
	
		pravoug(a, b);
		triug(a, b, c);
		kvadrat(a);
		romb(a, h);
}
 
int pravoug(int a, int b) {
	int S = a * b;
	printf("Liceto na pravougulnik e = %d", S);
	return S;
}

bool iftriugulnic(int a,int b, int c) {
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		return true;
	}
	else {
		return false;
	}
}
double triug(double a, double b,double c) {
	if (iftriugulnic( a,  b,  c)) {
		double p = (a + b + c) / 2;

		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("\nlice na triugulnik e = %.2lf", S);
		return S;
	}
	}
float kvadrat(float a) {
	float s = a * a;
	printf("\nlice kvadrat e = %.2f",s);
	return s;
}
int romb(int a, int h) {
	int s = a * h;
	printf("\nlice romb =%d", s);
	return s;
}