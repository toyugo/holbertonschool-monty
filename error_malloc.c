#include "monty.h"
/**
 * ERR_malloc - ERR_malloc
 * Return: 0
 */
int ERR_malloc(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free(BUFFER);
	fclose(FP);
	free_stack(STACK);
	freetab(TB);
	ERR = 1;
	exit(EXIT_FAILURE);
}
/**
 * free_Full - free_Full
 * Return: 0
 */
int free_Full(void)
{
	free(BUFFER);
	fclose(FP);
	free_stack(STACK);
	freetab(TB);
	exit(EXIT_FAILURE);
	return (EXIT_FAILURE);
}
