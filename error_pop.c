#include "monty.h"
/**
 * ERR_pop - ERR_pop
 * @line_number: string
 * Return: 0
 */
int ERR_pop(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	ERR = 1;
	return (EXIT_FAILURE);
}
