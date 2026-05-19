// Ukazatel 3.cpp : 
//

#include <iostream>
#include <stdio.h>
struct Point {
	int x;
	int y;
};
int main()
{
	Point points[10];
	points[0].x;
	points[0].y;
	for (int i = 0; i < 10; i++) {

		scanf_s("%d", &points[i].x);
		scanf_s("%d", &points[i].y);
	}

	for (int i = 0; i < 10; i++) {
		printf("\n(%d,%d)", points[i].x, points[i].y);
	}


}

// da se definira struktura ,opswashta persona , tq ima imena ot striik , ima telefonen nomer ,sredna zaplata ,dannite  za nashta struktura da se zapiswa ot klawiaturata 
//