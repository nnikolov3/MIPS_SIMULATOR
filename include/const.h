#pragma once
/* Global Variables and structs*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stddef.h>

#define MAX_SIZE 1024
#define BUFF_SIZE 9
#define ADDR_SIZE 33
#define OPCODE_SIZE 7

struct node{
  int address;
  char content[BUFF_SIZE];
  char bin_content[ADDR_SIZE];
  struct node *next;
};

int mips(int argc,char* argv[],struct node *head,struct node *current, uint32_t address);

int wrapper(int argc,char* argv[],struct node *head,struct node *current, uint32_t address);

void instruction_decode_wrapper(uint32_t PC,
				uint8_t mem_read,
				int argc,
				char *argv[],
				struct node *head,
				struct node *current,
				char *binarys,
				char state[4]);

void update_state(char state[4],int counter);
int execute(uint32_t PC,uint8_t mem_read,
	     int argc,
	     char *argv[],
	     struct node *head,
	     struct node *current,
	     char *binary,
	     char state[4]);

