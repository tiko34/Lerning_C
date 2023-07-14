

#include <stdio.h>

#include <locale.h>

main()
{

	setlocale(LC_ALL, "Rus");

	int fail = 0; // кол-во неудачных экзаменов

	int pass = 0; // кол-во удачных экзаменов

	int student = 0;  //кол-во студентов

	int check = 0;  //Ввод пользователя

	while (student < 10)

	{
		printf("Введите результат студента ( 1 = Сдал, 2 = Не сдал):\t");
		
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

	printf("Количество студентов сдавших экзамены:\t%d\n",pass);

	printf("Количество студентов несдавших экзамены:\t%d\n",fail);

	if (pass >= 8)
	{
		printf("%s", "Премировать преподавателя");
	}

	return 0;

}