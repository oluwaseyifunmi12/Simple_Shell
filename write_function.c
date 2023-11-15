#include "shell.h"

/**
 * write_f - function to replace the write function call
 * @str: string to be read
 * @descriptor: Note
 * Return: Null
 */

void write_f(char *str, int descriptor)
{
	int i = 0;

	for (; string[i] != '\0'; i++)
	write(stream, &string[i], 1);
}
