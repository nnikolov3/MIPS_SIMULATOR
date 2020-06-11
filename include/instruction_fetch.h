#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
get_opcode
char *get_opcode(char (*array)[ADDR_SIZE]);
char *get_instruction(char (*array)[OPCODE_SIZE]);
char *memory_read();
