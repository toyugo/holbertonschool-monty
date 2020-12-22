#include "monty.h"
/**
 * print_dlistint - print_dlistint
 * @h: head
 * Return: 0
 */
int print_dlistint(const stack_t *h)
{
	const stack_t *ptr;
	int i;

	i = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
/**
 * add_dnodeint - add_dnodeint
 * @head: head
 * @n: int
 * Return: 0
 */
stack_t *add_dnodeint(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (new);
}
/**
 * f_push - f_push
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (TB[1] == NULL)
		return;
	add_dnodeint(stack, atoi(TB[1]));
}
/**
 * f_pall - f_pall
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	(void)line_number;
	ptr = *stack;
	print_dlistint(ptr);
}
