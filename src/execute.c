#include "../include/instruction_fetch.h"
#include "../include/const.h"

int  execute(uint32_t PC,
	     uint8_t mem_read,
	     int argc,
	     char *argv[],
	     struct node *head,
	     struct node *current,
	     char *binary,
	     char state[4])
{
  char *opcode = malloc(OPCODE_SIZE);
  char *instruction = malloc(OPCODE_SIZE);
  char *format = malloc(OPCODE_SIZE);
  char *type = malloc(3);
  char *rs = malloc(OPCODE_SIZE-1);
  char *rt = malloc(OPCODE_SIZE-1);
  char *unused = malloc(10);
  char *immediate = malloc(16);
  uint32_t A;
  char *rd = malloc(5);
  int i = 0;
  opcode = get_opcode(binary);
  int result;
  rs = get_rs(binary);
  rt = get_rt(binary);
  instruction = read_instruction(opcode);
  type = get_type(instruction);
   printf("|" "MIPS->" "|%s|",state);
  //-------------------------
  if(strcmp(format,"R")){
    rd = get_rd(binary);
    unused = get_unused(binary);
  }
  else{
    immediate = get_immediate(binary);
  }

  //----------------------
  if(strncmp(type,"ADD",3)){
      result =(atoi(rs) + atoi(rt));
      printf(" rd  %d\n",result);
     return  rd = result;
    }
  else if (strncmp(type,"ADDI",4)){
    result =(atoi(rs) + atoi(immediate));
    printf(" rt  %d\n",result);
    return  rt = result;
  }
  else if (strncmp(type,"SUBI",4)){
    result =(atoi(immediate) - atoi(rs));
    printf(" rd  %d \n",result);
    rd = result;
  }
  else if (strncmp(type,"MUL",3)){
    result =(atoi(rs) * atoi(rt));
    printf(" rt  %d\n",result);
    return rt = result;
  }
  else if (strncmp(type,"SUB",3)){
    result =(atoi(rt) + atoi(rs));
    printf(" rd  %d\n",result);
    return  rd = (char*)result;
  }
  else if (strncmp(type,"MULI",4)){
    result =(atoi(rs) * atoi(immediate));
    printf(" rs  %d\n",result);
    return rs = (char)result;
  }
  else if (strncmp(type,"OR",2)){
    result =(atoi(rs)|atoi(rt));
    printf(" rd  %d\n",result);
    return rd = (char*)result;
  }
  else if (strncmp(type,"ORI",3)){
    result =(atoi(rs) | atoi(immediate));
    printf(" rt  %d\n",result);
    return rt = (char)result;
  }
  else if (strncmp(type,"AND",4)){
    result =(atoi(rs) & atoi(rt));
    printf(" rd  %d\n",result);
    return rd = (char)result;
  }
  else if (strncmp(type,"ANDI",4)){
    result =(atoi(rs) & atoi(immediate));
    printf(" rt  %d\n",result);
    return  rt = (char)result;
  }else if (strncmp(type,"XOR",4)){
    result =(atoi(rs) ^ atoi(rt));
    printf(" rd  %d\n",result);
    rd = (char)result;
  }else if (strncmp(type,"XORI",4)){
    result =(atoi(rs) ^ atoi(immediate));
    printf(" rt  %d\n",result);
    return rt = (char)result;
  }else if (strncmp(type,"LDW",4)){
    result =(atoi(rs) * atoi(immediate));
    printf(" Address  %d\n",result);
    return  A = (char)result;
      
  }else if (strncmp(type,"STW",4)){
    result =(atoi(rs) * atoi(immediate));
    printf(" Address  %d\n",result);
    return  A = (char)result;
  }else if (strncmp(type,"BZ",4)){
    printf(" BZ  %d\n",result);
    if (atoi(rs) == 0){
      return 0;
    }
  }else if (strncmp(type,"BEQ",4)){
    printf(" BEQ  %d\n",result);
      if(atoi(rs) == atoi(rt)){
	return 0;			//go to addr			
      }
   }else if (strncmp(type,"JR",4)){

    printf(" JR  %d\n",result);
      return 0;
  }else if (strncmp(type,"HALT",4)){
    printf(" HALT  \n");
      exit(0);
  }

    return -1;
  }

