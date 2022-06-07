#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet, in lowercase.
 *
 * Return: Always: 0.
 */
void print_alphabet(void)
{
	char letter;
	char alphabet;

	for(letter = 'a'; letter <= 'z'; letter++)
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar('letter');
		putchar(alphabet);
	}
	{
		putchar('\n');
	}
}
