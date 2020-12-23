#include "monty.h"
/**
 * f_pchar - f_pchar
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL)
	{
		ERR_pchar(line_number);
		return;
	}
	if (ptr->n < 0 || ptr->n > 127)
	{
		ERR_pchar_range(line_number);
		return;
	}
	printf("%c\n", ptr->n);
}
/**
 * f_pstr - f_pstr
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	(void)line_number;
	ptr = *stack;

	while (ptr && ptr->n)
	{
		if (ptr->n < 0 || ptr->n > 127)
			break;
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	putchar('\n');
}
/**
 * f_rotl - f_rotl
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	stack_t *ptrM;
	int tmp_nb;

	(void)line_number;
	ptr = *stack;
	ptrM = *stack;
	if (ptr == NULL)
		return;
	while (ptrM->next != NULL)
		ptrM = ptrM->next;

	tmp_nb = ptr->n;
	ptr->n = ptrM->n;
	ptrM->n = tmp_nb;
	ptrM = *stack;
	ptr = ptr->next;
	while (ptr != NULL && ptr->next != NULL)
	{
		tmp_nb = ptr->n;
		ptr->n = ptrM->n;
		ptrM->n = tmp_nb;
		ptrM = ptrM->next;
		ptr = ptr->next;
	}
}
/**
 * f_rotr - f_rotr
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	int last_nb;

	(void)line_number;
	ptr = *stack;
	if (ptr == NULL)
		return;
	while (ptr->next != NULL)
		ptr = ptr->next;
	last_nb = ptr->n;
	(*stack)->n = last_nb;
}


