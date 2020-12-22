#include "monty.h"
/**
 * ERR_malloc - ERR_malloc
 * Return: 0
 */
int ERR_malloc(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	ERR = 1;
	return (EXIT_FAILURE);
}
