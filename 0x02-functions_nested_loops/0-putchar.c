#include "main.h"

/**
 * main - prints main
 *
 * Description: prints main
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "main";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
