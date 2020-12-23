#include "monty.h"
/**
 * f_pint - f_pint
 * @stack: stack
 * @line_number: line number
 * Return: tab of char
 */
void f_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL)
	{
		ERR_pint(line_number);
		return;
	}
	printf("%d\n", ptr->n);
}
