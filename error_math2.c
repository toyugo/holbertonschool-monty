#include "monty.h"
/**
 * ERR_div_o - ERR_div_o
 * @line_number: string
 * Return: 0
 */
int ERR_div_o(unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	free_Full(-1);
	return (EXIT_FAILURE);
}

