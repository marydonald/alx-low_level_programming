#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet, in lowercase.
 *
 * Return: Always: 0.
 */
void print_alphabet(void)
{
	char a;
	char alphabet;

	for(a= 'a'; a <= 'z'; a++)
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar('a');
		putchar(alphabet);
	}
	{
		putchar('\n');
	}
}
