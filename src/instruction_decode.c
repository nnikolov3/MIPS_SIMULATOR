#include "../include/instruction_fetch.h"
#include "../include/const.h"

void instruction_decode_wrapper(uint32_t PC,
				uint8_t mem_read,
				int argc,
				char *argv[],
				struct node *head,
				struct node *current,
				char *binary,
				char state[4]){
				
  char *opcode = malloc(OPCODE_SIZE);
  char *instruction = malloc(OPCODE_SIZE);
  char *format = malloc(OPCODE_SIZE);
  char *type = malloc(3);
  char *rs = malloc(OPCODE_SIZE-1);
  char *rt = malloc(OPCODE_SIZE-1);
  char *unused = malloc(10);
  char *immediate = malloc(16);
  char *rd = malloc(5);
  int i = 0;
  char *decor = "_";
  opcode = get_opcode(binary);
  rs = get_rs(binary);
  rt = get_rt(binary);
  instruction = read_instruction(opcode);
  type = get_type(instruction);
  
  i = 0 ;
  while(i <50){
    if(i == 0) {
      printf("|" "MIPS->" "|%s|",state);
    }
    else if (i ==49)
      {printf("\r\n");}
    else{printf("%s",decor);}
    i++;
  }
  printf("|Opcode:%s|",opcode);
  printf("Rs:%s|",rs);
  printf("Rt:%s|",rt);
  if(strcmp(format,"R")){
    rd = get_rd(binary);
    unused = get_unused(binary);
    printf("Rd:%s|",rd);
    printf("Unused:%s|",unused);
  
  }
  else{
    immediate = get_immediate(binary);
    printf("immediate:%s|",immediate);
  }
  printf("Instr:%s|",instruction);
  printf("Type:%s|",type);
  printf("\r\n");

  free(opcode);
  free(rd);
  free(unused);
  free(instruction);
  free(format);
  free(type);
  free(rt);
  free(rs);
  
}

  
