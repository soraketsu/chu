#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year = 200;
	while (year <= 2023)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d��������\n", year);
			}
			else
			{
				if (year % 400 == 0)
				{
					printf("%d��������\n", year);
				}
				else
				{
					printf("%d�겻������\n", year);
				}
			}
		}
		else
		{
			printf("%d�겻������\n", year);
		}
		year++;
	}
	return 0;		
}