
#include <stdio.h>

int Adding_number(int a, int b)
{

	return a + b;

}

int main()
{
	printf("Adding two numbers in function\n");

	int one;

	int two;

	printf("Enter 1 number\n");

	scanf_s("%d", &one);

	printf("Enter 2 number\n");

	scanf_s("%d", &two);

	int res = Adding_number(one, two);

	printf("Sum number:%d\t", res);

	return 0;
}