#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter price of Shopping : ");
	scanf_s("%d", &a);
	printf("Enter your hour and minute to use parking a car  ");
	printf("\nHour : ");
	scanf_s("%d", &b);
	printf("Minute : ");
	scanf_s("%d", &c);

	if (a >= 1000)
	{
		printf("\nYou can parking a car for free three hour");
		if (b > 3)
		{
			if (c > 0)
			{
				b += 1;
			}
			int price;
			price = (b - 3) * 40;
			printf("\nPrice of parking = %d Bath", price);
			if (price > 160)
			{
				printf("\nYou can pay 150 Bath.");
			}
		}
		if (b < 3)
		{
			printf("\nYou can parking free");
		}

	}

	if (a < 1000)
	{
		printf("\nYou can parking Free 1 Hour");
		if (b > 1)
		{
			if (c > 0)
			{
				b += 1;
			}
			int price;
			price = (b - 1) * 40;
			printf("\nprice of parking = %d Bath.", price);
			if (price > 160)
			{
				printf("\nYou can pay 150 Bath.");
			}

		}
	}


	return 0;
}
