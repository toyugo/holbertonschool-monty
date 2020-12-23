#include "monty.h"
/**
 * parse_in_alloc_tab - parse_in_alloc_tab
 * @s: string
 * Return: tab of char
 */
int parse_in_alloc_tab(char *s)
{
	int i = 0;
	unsigned int j = 0;
	char d[] = " \n\t";
	char *token;

	if (s == NULL)
		return (-1);
	/*a passer peut etre en copy*/
	TB = malloc(sizeof(char *) * 3);
	if (TB == NULL)
	{
		ERR_malloc();
		return (-1);
	}
	TB[0] = NULL;
	TB[1] = NULL;
	TB[2] = NULL;
	token = strtok(s, d);
	while (token != NULL && i < 2)
	{
		TB[i] = malloc(sizeof(char) * strlen(token) + 1);
		if (TB[i] == NULL)
		{
			ERR_malloc();
			return (-1);
		}
		for (j = 0; j < strlen(token); j++)
			TB[i][j] = token[j];
		TB[i][j] = '\0';
		token = strtok(NULL, d);
		i++;
	}
	return (1);
}
/**
 * find_function - find_function
 * @code: stack
 * Return: void
 */
void (*find_function(char *code))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t _instruction[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_Pop},
		{"nop", f_nop},
		{"add", f_add},
		{"sub", f_sub},
		{"mul", f_mul},
		{"div", f_div},
		{"mod", f_mod},
		{"swap", f_swap},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{"stack", f_stack},
		{"queue", f_queue},
		{NULL, NULL}
	};
	/*check in instruction*/
	for (i = 0; _instruction[i].opcode != NULL; i++)
	{
		if (strcmp(code, _instruction[i].opcode) == 0)
		{
			return (_instruction[i].f);
		}
	}
	return (NULL);
}
