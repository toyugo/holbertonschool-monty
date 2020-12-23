#include "monty.h"
/**
 * f_Pop - f_Pop
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_Pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptrP;
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL)
	{
		ERR_pop(line_number);
		return;
	}
	ptrP = *stack;
	ptrP = ptrP->next;
	free(ptr);
	if (ptrP)
		ptrP->prev = NULL;
	*stack = ptrP;

}
/**
 * f_nop - f_nop
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
