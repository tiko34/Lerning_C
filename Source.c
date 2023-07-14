
#include <stdio.h>

#include <locale.h>

int Adding_number(int a, int b)
{

	return a + b;

}

int main()
{
	setlocale(LC_ALL, "Rus");

	int one;

	int two;

	printf("¬ведите первое целое число:\t");

	scanf_s("%d", &one);

	printf("¬ведите второе целое число:\t");

	scanf_s("%d", &two);

	int res = Adding_number(one, two);

	printf("—умма двух целых чисел:\t%d", res);

	return 0;
}
