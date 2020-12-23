#ifndef __MONTY_H__
#define __MONTY_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char **TB;
int ERR;
FILE *FP;
char *BUFFER;
stack_t *STACK;
int parse_in_alloc_tab(char *s);
void (*find_function(char *code))(stack_t **, unsigned int);
int print_dlistint(const stack_t *h);
stack_t *add_dnodeint(stack_t **head, int n);
void f_push(stack_t **stack, unsigned int line_number);
void f_pall(stack_t **stack, unsigned int line_number);
void f_pint(stack_t **stack, unsigned int line_number);
void f_Pop(stack_t **stack, unsigned int line_number);
void f_nop(stack_t **stack, unsigned int line_number);

void f_add(stack_t **stack, unsigned int line_number);
void f_sub(stack_t **stack, unsigned int line_number);
void f_mul(stack_t **stack, unsigned int line_number);
void f_div(stack_t **stack, unsigned int line_number);
void f_mod(stack_t **stack, unsigned int line_number);
void f_pchar(stack_t **stack, unsigned int line_number);
void f_swap(stack_t **stack, unsigned int line_number);
void f_pstr(stack_t **stack, unsigned int line_number);
void f_rotl(stack_t **stack, unsigned int line_number);
void f_rotr(stack_t **stack, unsigned int line_number);
void f_stack(stack_t **stack, unsigned int line_number);
void f_queue(stack_t **stack, unsigned int line_number);
int freetab(char **tb);
void free_stack(stack_t *head);
int ERR_f_open(char *file_n);
int ERR_arg(void);
int ERR_push(unsigned int line_number);
int ERR_pint(unsigned int line_number);
int ERR_invalid(unsigned int line_number, char *opcode);
int ERR_malloc(void);
int ERR_pop(unsigned int line_number);
int ERR_add(unsigned int line_number);
int ERR_sub(unsigned int line_number);
int ERR_div(unsigned int line_number);
int ERR_mul(unsigned int line_number);
int ERR_mod(unsigned int line_number);
int ERR_div_o(unsigned int line_number);
int ERR_swap(unsigned int line_number);
int free_Full(int flag);
int ERR_pchar(unsigned int line_number);
int ERR_pchar_range(unsigned int line_number);
#endif
