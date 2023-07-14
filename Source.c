

#include <stdio.h>

#include <locale.h>

#include <math.h>

main()
{

	setlocale(LC_ALL, "Rus");

	double amount;  //Депозит с прцоентом за N-год

	double principal = 1000.00;  //Депозит

	double rate = 0.05; //Прцоентная ставка

	int year;

	printf("%4s%21s\n", "Год", "Сумма депозита");

	for (year = 1; year <= 10; year++)
	{
		amount = principal * pow( 1.0 + rate, year);

		printf("%4d%21.2f\n", year, amount);
	}


	return 0;

}