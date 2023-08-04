#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: arguement
 * @argv: array of pointers to argument
 * Return: number of coins
 **/
int main(int argc, char *argv[])
{
	int total, coinsfil;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	coinsfil = 0;
	if (total > 25)
	{
		while (total >= 25)
			total -= 25, coinsfil++;
	}
	if (total > 10 && total < 25)
	{
		while (total >= 10)
			total -= 10, coinsfil++;
	}
	if (total > 5 && total < 10)
	{
		while (total >= 5)
			total -= 5, coinsfil++;
	}
	if (total > 2 && total < 5)
	{
		while (total >= 2)
			total -= 2, coinsfil++;
	}
	if (total == 1 || total == 2 || total == 5 || total == 10 || total == 25)
	{
		coinsfil++;
	}
	printf("%d\n", coinsfil);
	return (0);
}
