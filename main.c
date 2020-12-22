#include "monty.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
	/*GetLineVar*/
	char *buffer = NULL;
	FILE *fp;
	size_t bufsize = 1000;
	ssize_t line_size;
	unsigned int cpline = 1;
	/*GetFunction*/
	void (*code)(stack_t**, unsigned int);
	stack_t *stack = NULL;

	if (argc != 2)
	{
		ERR_arg();
		return (-1);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		ERR_f_open(argv[1]);
		return (-1);
	}
	line_size = getline(&buffer, &bufsize, fp);
	while (line_size != EOF)
	{
		TB = parse_in_alloc_tab(buffer);
		code = find_function(TB[0]);
		if (code == NULL)
			ERR_invalid(cpline, TB[0]);
		/*Initialise the stack*/
		/*Launch Corresponding function*/
		if (code != NULL)
			code(&stack, cpline);
		freetab(TB);
		line_size = getline(&buffer, &bufsize, fp);/*go to next line*/
		cpline++;
	}
	free_stack(stack);
	free(buffer);
	fclose(fp);
	return (0);
}
