#include <stdio.h>

/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char name_of_school[] = "_putchar";

	while (i < 9)
	{
		putchar(name_of_school[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
