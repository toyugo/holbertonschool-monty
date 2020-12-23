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
	exit(EXIT_FAILURE);
}

