#include "monty.h"
/**
 * ERR_pchar_range - ERR_pchar_range
 * @line_number: string
 * Return: 0
 */
int ERR_pchar_range(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * ERR_pchar - ERR_pchar
 * @line_number: string
 * Return: 0
 */
int ERR_pchar(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * ERR_swap - ERR_swap
 * @line_number: string
 * Return: 0
 */
int ERR_swap(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
