#include <stdio.h>
#include <locale.h>
int main()
{
	
	setlocale(LC_ALL, "Rus");

	printf("Задание №1\n");

	int x1, x2, x3;
	int Misa[3][4] = {
				 {-1, 2,-3,-3},
				 {1, -1, 2, 2 },
				 {2, -3, 4, 3}
	};
	int i, j;
	printf("Главный масив\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
		{
			if (j == 3) {
				printf("%d\t", Misa[i][j]);
				printf("\n");
			}
			else
			{

				printf("%d\t", Misa[i][j]);
			}
		}
	}
	for (j = 0; j < 4; j++) {
		Misa[1][j] = Misa[0][j] + Misa[1][j];
		Misa[2][j] = Misa[0][j] * 2 + Misa[2][j];
	}
	printf("Шаг 1\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
		{
			if (j == 3) {
				printf("%d\t", Misa[i][j]);
				printf("\n");
			}
			else
			{

				printf("%d\t", Misa[i][j]);
			}
		}
	}

	for (j = 0; j < 4; j++) {
		Misa[2][j] = Misa[1][j] * (-1) + Misa[2][j];
	}
	printf("Шаг 2\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
		{
			if (j == 3) {
				printf("%d\t", Misa[i][j]);
				printf("\n");
			}
			else
			{

				printf("%d\t", Misa[i][j]);
			}
		}
	}

	x3 = Misa[2][2] * Misa[2][3];
	x2 = Misa[1][3] + x3;
	x1 = Misa[0][0] * Misa[0][3] + Misa[0][1] * x2 + Misa[0][2] * x3;
	printf("\n x1=%d \n x2=%d \n x3=%d", x1, x2, x3);

	int hola = -1;
	int count = 0;


	for (i = 0; i < 3; i++) {
		float asum = 0;
		for (j = 0; j < 4; j++)
		{
			asum += Misa[i][j];
		}

		asum = asum / j;

		if (asum < hola)
		{
			count++;
		}


	}

	printf("\n Величина= %d \n Количество строк, среднее арифметическое элементов, которых меньше заданной величины = %d", hola, count);

	printf("\nЗадание №2\n");

	
	i = 0, j = 0;
	int n = 1;
	int max = 0, temp = 0;
	int array_a[6][6] = {
		{1, -2, 2, -1,6,3},
		{2, 3, -1, -2,-3,4},
		{-3, 3, 2, -1,2,1},
		{2, 3, -1, -2,5,3},
		{1, -2, 2, -1,7 - 2},
		{-3, 3, 2, -1,2,2}
	};

	printf("\n");

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
			printf(" %d ", array_a[i][j]);
		printf("\n");
	}


	i = j = 0;
	while ((i < 6) && (j < 6))
	{
		temp += array_a[i][j];

		if ((j == 5) || (i == 0))
		{
			printf("\nДиагональ -%d=%d ", n, temp);
			if (temp > max)
				max = temp;
			temp = 0;
			n++;
		}
		if ((i == 0) && (j < 5))
		{

			i = ++j;
			j = 0;
		}
		else if (j == 5) { j = ++i; i = 5; }
		else { i--; j++; }
	}
	printf("\n Максимальая сумма =%d", max);


}
