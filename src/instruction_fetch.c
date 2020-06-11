#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include "../include/tools.h"
#include "../include/instruction_fetch.h"

char *memory_read(){



}



/* Fetch Instruction */
char *get_instruction(char (*array)[OPCODE_SIZE]){  
  char *opcode[OPCODE_SIZE+1];
  memcpy(opcode,array,OPCODE_SIZE);
  int op = atoi(opcode);
  char *inst;
  switch(op)
  {
    case 0:
      strcpy(inst,"ADD");
      break;
    case 1:
      strcpy(inst,"ADDI");
      break;
    case 2:
      strcpy(inst,"SUB");
      break;
    case 3:
      strcpy(inst, "SUBI");
      break;
    case 4:
      strcpy(inst,"MUL");
      break;
    case 5:
      strcpy(inst, "MULI");
      break;
    case 6:
       strcpy(inst,"OR");
      break;
    case 7:
      strcpy(inst,"ORI");
      break;
    case 8:
       strcpy(inst,"AND");
      break;
    case 9:
	strcpy(inst,"ANDI");
      break;
    case 10:
	 strcpy(inst,"XOR");
      break;
    case 11:
	 strcpy(inst,"XORI");
      break;
    case 12:
       strcpy(inst,"LDW");
      break;
    case 13:
       strcpy(inst,"STW");
      break;
    case 14:
       strcpy(inst, "BZ");
      break;
    case 15:
       strcpy(inst, "BEQ");
      break;
    case 16:
       strcpy(inst,"JR");
      break;
    case 17:
       strcpy(inst, "HALT");
      break;
    default:
      inst =NULL;
       break;
    }
    return op;

}

/* Get Opcode******************/
char *get_opcode(char (*array)[ADDR_SIZE]){
  
  char opcode[OPCODE_SIZE];
  char *tmp = malloc(ADDR_SIZE * sizeof(char));
  char *tmp2 = malloc(OPCODE_SIZE * sizeof(char));
  memcpy(tmp,array,ADDR_SIZE);
  int j = 0;
  for(int i = 0;i < OPCODE_SIZE-1;i++) {
    opcode[j]=tmp[i];
    j++;
  }

  free(tmp);
  memcpy(tmp2,opcode,OPCODE_SIZE);
  // printf("%s\n",opcode);
  return tmp2;

}
