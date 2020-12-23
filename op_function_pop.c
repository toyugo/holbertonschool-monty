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
		printf("ERROR");
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
 * f_add - f_add
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL || ptr->next == NULL)
	{
		add_error(line_number);
		return;
	}
	ptr->next->n = ptr->n + ptr->next->n;
	f_Pop(stack, line_number);
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
	return;
}
