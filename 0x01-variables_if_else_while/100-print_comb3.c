#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
=======
 * main - prints all possible combinations of two different digits,
 * in ascending order, seperated by a comma followed by a space.
 *
 * Return: Always
>>>>>>> 7b3c3aabad48c753cb1ef8beac935202f515c534
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
<<<<<<< HEAD
			
=======
>>>>>>> 7b3c3aabad48c753cb1ef8beac935202f515c534
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
