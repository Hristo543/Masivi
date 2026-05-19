// Ukazatel.cpp : 
//

#include <iostream>
#include <stdio.h>

int main()
{
	int mas[10], * p;
	int i;
	int sum;
	p = mas;
	for (i = 0; i < 10; i++) {
		printf("insert the elements of the masiv =");
		scanf_s(" %d", p);                    // Доступ до текущия елемент чрез  указател 
		p++;
	}
	p = mas;
	sum = 0;
		for(i = 0; i < 10; i++) {
			sum += *p;
			p++;
		}
		printf("sum = %d", sum);
		return 0;


} 

