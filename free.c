#include "monty.h"
/**
 * freetab - freetab
 * @tb: **tab to free
 * Return: 0
 */
int freetab(char **tb)
{
	int j;

	(void)tb;
	if (TB == NULL)
		return (-1);
	for (j = 0; TB[j]; j++)
	{

		if (TB[j] == NULL)
			return (-1);
		free(TB[j]);
	}
	free(TB);
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
/**
 * free_Full - free_Full
 * @flag: -1 fail
 * Return: 0
 */
int free_Full(int flag)
{
	free(BUFFER);
	fclose(FP);
	free_stack(STACK);
	if (flag == -1)
	{
		freetab(TB);
		exit(EXIT_FAILURE);
		return (EXIT_FAILURE);
	}
	else
		return (0);
}
