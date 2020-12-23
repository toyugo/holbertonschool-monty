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
	{
		ERR_malloc();
		return (NULL);
	}

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
	int i;

	if (TB[1] == NULL)
	{
		ERR_push(line_number);
		return;
	}
	if (strlen(TB[1]) == 1 && TB[1][0] == '-')
	{
		ERR_push(line_number);
		return;
	}
	for (i = 0; TB[1][i]; i++)
	{
		if (TB[1][i] == '-' && i == 0)
			continue;
		if (TB[1][i] > '9' || TB[1][i] < '0')
		{
			ERR_push(line_number);
			return;
		}
	}
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
	if (*stack != NULL)
	{
		ptr = *stack;
		print_dlistint(ptr);
	}
}
/**
 * f_swap - f_swap
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	int i;

	ptr = *stack;
	if (ptr == NULL || ptr->next == NULL)
	{
		ERR_swap(line_number);
		return;
	}
	i = ptr->next->n;
	ptr->next->n = ptr->n;
	ptr->n = i;
}
