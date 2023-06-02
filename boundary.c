#include "snake.h"
/**
 * boundary - Function to draw boundary
 *
 * Return: Type void. Returns Nothing
 */
void boundary(void)
{
	int i, j, Length = 30, Width = 30;

	for (i = 0; i < Length; i++)
	{
		for (j = 0; j < Width; j++)
		{
			if (i == 0 || i == Width - 1 || j == 0 || j == Length - 1)
			{
				putchar('#');
			}
			else
			{
				putchar(' ');
			}
		}
		printf("\n");
	}
}
/**
 * main - The driver/ main function.
 *	- calls the functions involved.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	boundary();

	return (0);
}
