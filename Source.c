
#include <stdio.h> 

#include <locale.h> 

int main()

{
	setlocale(LC_ALL, "Rus");

	unsigned int counter;

	int grade;

	int total;

	int average;

	total = 0;

	counter = 1;

	printf("%s", "���������� �������� �������� ������ �����\n");

	while (counter <= 10)
	{
		printf("%s", "������� ����� �����:\t");

		scanf_s("%d", &grade);

		total = total + grade;

		counter++;
	}
	average = total / 10;

	printf("������� �����:\t%d", average);

	return 0;

}