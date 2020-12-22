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
	char *buffer = NULL;
	FILE *fp;
	size_t bufsize = 1000;
	ssize_t line_size;
	unsigned int cpline = 1;
	void (*code)(stack_t**, unsigned int);
	stack_t *stack = NULL;

	if (argc != 2)
	{
		ERR_arg();
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		ERR_f_open(argv[1]);
		exit(EXIT_FAILURE);
	}
	line_size = getline(&buffer, &bufsize, fp);
	while (line_size != EOF)
	{
		TB = parse_in_alloc_tab(buffer);
		if (TB[0] == NULL)
			ERR_invalid(cpline, TB[0]);
		code = find_function(TB[0]);
		if (code == NULL)
			ERR_invalid(cpline, TB[0]);
		if (code != NULL)
			code(&stack, cpline);
		freetab(TB);
		if (ERR == 1)
			free_exit(stack, buffer, fp);
		line_size = getline(&buffer, &bufsize, fp);/*go to next line*/
		cpline++;
	}
	free_stack(stack);
	free(buffer);
	fclose(fp);
	return (0);
}
