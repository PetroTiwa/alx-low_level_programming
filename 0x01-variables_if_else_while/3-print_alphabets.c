#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 */
int main(void)
{
	
	int ch = 'a';
	int CH = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(ch);
		CH++;
	}
	putchar('\n');
	return (0);
}
