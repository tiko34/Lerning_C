

#include <stdio.h>

#include <locale.h>

main()
{

	setlocale(LC_ALL, "Rus");

	int fail = 0; // ���-�� ��������� ���������

	int pass = 0; // ���-�� ������� ���������

	int student = 0;  //���-�� ���������

	int check = 0;  //���� ������������

	while (student < 10)

	{
		printf("������� ��������� �������� ( 1 = ����, 2 = �� ����):\t");
		
		scanf_s("%d", &check);

		if (check == 1)
		{
			pass++;
		}
		else
		{
			fail++;
		}

		student++;
	}

	printf("���������� ��������� ������� ��������:\t%d\n",pass);

	printf("���������� ��������� ��������� ��������:\t%d\n",fail);

	if (pass >= 8)
	{
		printf("%s", "����������� �������������");
	}

	return 0;

}