#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet, in lowercase.
 *
 * Return: Always: 0.
 */
int main(void)

	char letter;

	print_alphabet("Lowercase letters : \n");

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar("%c " letter);

	putchar('\n');

	return (0);
}
