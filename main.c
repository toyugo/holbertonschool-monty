#include "monty.h"
/**
 * free_exit - free_exit
 * @stack: argc
 * @buffer: buffer
 * @fp: fp
 * Return: int
 */

void free_exit(stack_t *stack, char *buffer, FILE *fp)
{
	free_stack(stack);
	free(buffer);
	fclose(fp);
	exit(EXIT_FAILURE);
}
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
	size_t bufsize = 0;
	ssize_t line_size;
	unsigned int cpline = 1;
	void (*code)(stack_t**, unsigned int);

	STACK = NULL;
	BUFFER = NULL;
	if (argc != 2)
		ERR_arg();
	FP = fopen(argv[1], "r");
	if (!FP)
		ERR_f_open(argv[1]);
	line_size = getline(&BUFFER, &bufsize, FP);
	while (line_size != EOF)
	{
		parse_in_alloc_tab(BUFFER);
		if (TB[0][0] != '#')
		{
			if (TB[0] != NULL)
			{
				code = find_function(TB[0]);
				if (code == NULL)
					ERR_invalid(cpline, TB[0]);
				if (code != NULL)
					code(&STACK, cpline);
			}
		}
		freetab(TB);
		line_size = getline(&BUFFER, &bufsize, FP);/*go to next line*/
		cpline++;
	}
	free_Full(1);
	return (0);
}
