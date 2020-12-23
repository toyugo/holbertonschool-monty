#include "monty.h"
/**
 * ERR_add - ERR_add
 * @line_number: string
 * Return: 0
 */
int ERR_add(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * ERR_sub - ERR_sub
 * @line_number: string
 * Return: 0
 */
int ERR_sub(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * ERR_div - ERR_div
 * @line_number: string
 * Return: 0
 */
int ERR_div(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * ERR_mul - ERR_mul
 * @line_number: string
 * Return: 0
 */
int ERR_mul(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}
/**
 * ERR_mod - ERR_mod
 * @line_number: string
 * Return: 0
 */
int ERR_mod(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}

