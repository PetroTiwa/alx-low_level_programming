#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar(alphabet);
	return (0);
}
