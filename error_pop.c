#include "monty.h"
/**
 * ERR_pop - ERR_pop
 * @line_number: string
 * Return: 0
 */
int ERR_pop(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * add_error - add_error
 * @line_number: string
 * Return: 0
 */
int add_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
