#include "monty.h"
/**
 * ERR_pchar - ERR_pchar
 * @line_number: string
 * Return: 0
 */
int ERR_pchar(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
int ERR_swap(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);	
}
