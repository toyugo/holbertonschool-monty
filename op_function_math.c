#include "monty.h"
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
		ERR_add(line_number);
		return;
	}
	ptr->next->n = ptr->n + ptr->next->n;
	f_Pop(stack, line_number);
}
/**
 * f_sub - f_sub
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL || ptr->next == NULL)
	{
		ERR_sub(line_number);
		return;
	}
	ptr->next->n = ptr->next->n - ptr->n;
	f_Pop(stack, line_number);
}
/**
 * f_mul - f_mul
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL || ptr->next == NULL)
	{
		ERR_mul(line_number);
		return;
	}
	ptr->next->n = ptr->next->n * ptr->n;
	f_Pop(stack, line_number);
}
/**
 * f_div - f_div
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL || ptr->next == NULL)
	{
		ERR_div(line_number);
		return;
	}
	if (ptr->next->n == 0 || ptr->n == 0)
	{
		ERR_div_o(line_number);
		return;
	}
	ptr->next->n = ptr->next->n / ptr->n;
	f_Pop(stack, line_number);
}
/**
 * f_mod - f_mod
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL || ptr->next == NULL)
	{
		ERR_mod(line_number);
		return;
	}
	if (ptr->next->n == 0 || ptr->n == 0)
	{
		ERR_div_o(line_number);
		return;
	}
	ptr->next->n = ptr->next->n % ptr->n;
	f_Pop(stack, line_number);
}
