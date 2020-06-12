#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include "../include/const.h"

/****************************/
char *get_opcode(char *array);
char *get_binary(uint32_t PC,struct node *head,struct node *current);
char  *read_instruction(char *array);
struct node *delete_entry(struct node *head,struct node *current);
char *get_type(char *array);
void instruction_fetch_wrapper(uint32_t PC,int mem_lock,
			       int argc,char *argv[],struct node *head,
			       struct node *current,
			       char *binary, uint32_t address,
			       char state[4]
			       );
char *get_rs(char *binary);
char *get_rt(char *binary);
char *get_rd(char *binary);
char *get_unused(char *binary);
char *get_immediate(char *binary);
