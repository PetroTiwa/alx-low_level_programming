#include "main.h"
#include <unistd.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 0n success 1.
 * on error, 1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	return (write(1, &c, 1));
}
