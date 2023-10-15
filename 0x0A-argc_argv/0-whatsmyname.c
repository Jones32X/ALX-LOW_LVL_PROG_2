#include "main.h"
#include <stdio.h>

/**
 * main - responsible for printing program name
 * @argc: amountof arguments
 * @argv: argument array
 * Return: Alwasys 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", *argv);
	return (0);
}
