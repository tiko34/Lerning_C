
#include <stdio.h>

#include <locale.h>

int Adding_number(int a, int b)
{

	return a + b;

}

int main()
{
	setlocale(LC_ALL, "Rus");

	printf("�������� ���� ����� � �������������� �������\n");

	int one;

	int two;

	printf("������� ������ ����� �����:\t");

	scanf_s("%d", &one);

	printf("������� ������ ����� �����:\t");

	scanf_s("%d", &two);

	int res = Adding_number(one, two);

	printf("����� ���� ����� �����:%d\t", res);

	return 0;
}