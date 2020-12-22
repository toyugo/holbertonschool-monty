#include "monty.h"
/**
 * ERR_f_open - ERR_f_open
 * @file_n: string
 * Return: 0
 */
int ERR_f_open(char *file_n)
{
	(void)file_n;
	/*fprintf(stderr, "Error: Can't open file %s\n", file_n);*/
	ERR = 1;
	return (EXIT_FAILURE);
}
/**
 * ERR_arg - ERR_arg
 * Return: 0
 */
int ERR_arg(void)
{
	/*fprintf(stderr, "USAGE: monty file\n");*/
	ERR = 1;
	return (EXIT_FAILURE);
}
/**
 * ERR_push- ERR_push
 * @line_number: line number
 * Return: 0
 */
int ERR_push(unsigned int line_number)
{
	(void)line_number;
	/*fprintf(stderr, "L%d: usage: push integer\n", line_number);*/
	ERR = 1;
	return (EXIT_FAILURE);
}

/**
 * ERR_pint - ERR_pint
 * @line_number: line number
 * Return: 0
 */
int ERR_pint(unsigned int line_number)
{
	(void)line_number;
	/*fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);*/
	ERR = 1;
	return (EXIT_FAILURE);
}
/**
 * ERR_invalid- ERR_invalid
 * @line_number: line number
 * @opcode: opcode
 * Return: 0
 */
int ERR_invalid(unsigned int line_number, char *opcode)
{
	(void)line_number;
	(void)opcode;
	/*fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);*/
	ERR = 1;
	return (EXIT_FAILURE);
}
