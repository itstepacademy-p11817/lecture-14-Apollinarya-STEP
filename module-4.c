#include "module-4.h"

vychislenija(int num, int choice)
{
	int count = 0;
	for (int i = 1; i*i*i <= num; i++)
	{
		if (num % (i*i) == 0 && num % (i*i*i) != 0)
		{
			count++;
			if (choice == 1)
			{
				printf("%d  ", i);
			}
		}
	}
	if (count > 0)
	{
		if (choice == 2 || choice == 3)
		{
			printf("%d; ", num);
		}
		return count;
	}
	return 0;	
}

choice_funct(int choice)
{
	if (choice == 1)
	{
		int user_num = 1;
		printf("\nEnter your number: ");
		scanf_s("%d", &user_num);
		while (user_num <= 0)
		{
			printf(" %d <= 0 Enter number bigger than zero.\n", user_num);
			printf("Enter your number (a b) ");
			scanf_s("%d", &user_num);
		}

		vychislenija(user_num, choice);
	}
	else if (choice == 2)
	{
		int range_a = 1;
		int range_b = 1;
		printf("Enter your range (a b) ");
		scanf_s("%d %d", &range_a, &range_b);
		while (range_a <= 0 || range_b <= 0 || range_a > range_b)
		{
			printf("Enter right range (b must be bigger than a, both must be bigger than zero).\nEnter your range (a b) ");
			scanf_s("%d %d", &range_a, &range_b);
		}

		for (int i = range_a; i <= range_b; i++)
		{
			vychislenija(i, choice);
		}
	}
	else if (choice == 3)
	{
		int celoe_chislo_A = 1;
		int count = 0;
		int amount = 0;
		while (celoe_chislo_A <= 1000000)
		{
			count = vychislenija(celoe_chislo_A, choice);
			if (count == 1)
			{
				amount++;
			}
			celoe_chislo_A++;
		}
		printf("Amount of nums: %d\n", amount);
	}
	
	return 0;
}
