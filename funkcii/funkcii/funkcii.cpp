// funkcii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
int sum(int a, int b);//prototip
int izv(int x, int y);
int umn(int c, int d);
double del(double t, double r);
double koren(double site);
double poll(double p);
int main()
{
	int a;
	int b;
	printf("a =");
	scanf_s("%d", &a);
	printf("b =");
	scanf_s("%d", &b);

	sum(a, b); //izwikvane na funkciqta 
	
	izv(a, b);
	printf("++++++++");
	umn(a, b);
	printf("++++++++");
	del(a, b);
	printf("++++++++");
	koren((double)a);
	printf("++++++++");
	poll((double )a);
}
int sum(int a, int b) {  //definiciq
	
	int S = a + b;
	printf("sum =%d", S);
	return S;
}
int izv(int x, int y) {
	int izv = x - y;
	printf("izv =%d", izv);
	return izv;
}
int umn(int c, int d) {
	int umn = d * c;
	printf("umn =%d", umn);
	return umn;
}
double del(double t, double r) {
	double del = t / r;
	printf("del = %lf", del);
	return del;
}
double koren (double site) {
	double korenn = sqrt(site);
	printf("koren = %lf");
	return korenn;
}
double poll(double p) {
	double pol = p*p;
	printf("pol = %lf");
	return pol;
}