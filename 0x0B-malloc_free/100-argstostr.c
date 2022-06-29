#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int count = 0;
	int t_count = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			t_count++;

		t_count++;
	}

	result = malloc(sizeof(char) * t_count + 1);

	if (result == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[count++] = av[i][j];
		}
		result[count++] = '\n';
	}

	result[t_count] = '\0';
	return (result);
}
