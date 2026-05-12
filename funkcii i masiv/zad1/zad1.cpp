// zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
const int size = 6;
void vuvejdane(int size, int arr[6],int value);
void printirane(int size, int arr[6]);
int main()
{
	int arr[size];
	int valuemain = 0;
	//scanf_s("%d", &valuemain);
	vuvejdane(size,arr,valuemain);
	printirane(size, arr);


}
void vuvejdane(int size, int arr[6], int value) {
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &value);
		arr[i] = value;
	}
}
void printirane(int size, int arr[6]) {
	for (int i = 0; i < size; i++) {
		printf("\narr[%d]=%d", i, arr[i]);
	}
}