#include "monty.h"
/**
 * ERR_f_open - ERR_f_open
 * @file_n: string
 * Return: 0
 */
int ERR_f_open(char *file_n)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_n);
	return (EXIT_FAILURE);
}
/**
 * ERR_arg - ERR_arg
 * Return: 0
 */
int ERR_arg(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
