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
