#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <stddef.h>
#include <ctype.h>
/**
 */

void check_num_of_argument(int argc);
void initialize_arguments_node(void);
void fetch_file_content(char *user_file);
void memory_allocation_failed(void);
void fetch_failed(char *user_file);
void free_arguments_node(void);
void tokenize_read_line(void);
void free_toks_arr(void);
void fetch_instruction(void);
void close_file(void);
void execute_instruction(void);
void instruction_not_valid(void);
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct arguments
{
        FILE *file;
        char **toks_arr;
        char read[100];
        unsigned int file_line_num;
        int toks_num;
        instruction_t *instruct;
}args;

extern args *arguments;

#endif /* MONTY_H */
