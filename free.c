#include "monty.h"
/**
 * freetab - freetab
 * @tb: **tab to free
 * Return: 0
 */
int freetab(char **tb)
{
	int j;

	if (tb == NULL)
		return (-1);
	for (j = 0; tb[j]; j++)
	{
		if (tb[j] == NULL)
			return (-1);
		free(tb[j]);
	}
	free(tb);
	return (0);
}
/**
 * free_stack - freetab
 * @head: **head
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
