#include "../include/instruction_fetch.h"
#include "../include/const.h"



void instruction_fetch_wrapper(uint32_t PC,int mem_read ,int argc,char *argv[],
			      struct node *head,struct node *current,
			      char *binary, uint32_t address,char state[4]){
  


  printf("|" "MIPS->" "|%s|",state);
  printf("|Binary:%s|",binary);
  printf("Addr:%016x|" ,PC);
  printf("\r\n");

}
char *get_binary(uint32_t PC, struct node *head,struct node *current){
  char *binary = malloc(ADDR_SIZE);
  current = head;
   //if list is empty
   if(head == NULL) {
      return NULL;
   }
   //navigate through list
   while(current->address != PC) {
      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //go to next link
         current = current->next;
      }
   }      
   //if data found, return the current Link
   memcpy(binary,current->bin_content,ADDR_SIZE);
   return binary;
}

//delete a link with given key
struct node *delete_entry(struct node *head,struct node *current) {
  struct node *prev = current;
  current = current -> next;
  free(prev);
  return current;
}
/* Fetch Instruction */
char *read_instruction(char *array){
  
  int op = atoi(array);
  char *inst=malloc(OPCODE_SIZE);
  switch(op)
    {
    case 0:
      strncpy(inst,"ADD",4);
      break;
    case 1:
      strncpy(inst,"ADDI",5);
      break;
    case 2:
      strncpy(inst,"SUB",4);
      break;
    case 3:
      strncpy(inst, "SUBI",5);
      break;
    case 4:
      strncpy(inst,"MUL",4);
      break;
    case 5:
      strncpy(inst, "MULI",5);
      break;
    case 6:
      strncpy(inst,"OR",3);
      break;
    case 7:
      strncpy(inst,"ORI",4);
      break;
    case 8:
      strncpy(inst,"AND",4);
      break;
    case 9:
      strncpy(inst,"ANDI",5);
      break;
    case 10:
      strncpy(inst,"XOR",4);
      break;
    case 11:
      strncpy(inst,"XORI",5);
      break;
    case 12:
      strncpy(inst,"LDW",4);
      break;
    case 13:
      strncpy(inst,"STW",4);
      break;
    case 14:
      strncpy(inst, "BZ",3);
      break;
    case 15:
      strncpy(inst, "BEQ",4);
      break;
    case 16:
      strncpy(inst,"JR",3);
      break;
    case 17:
      strncpy(inst, "HALT",5);
      break;
    default:
      inst =NULL;
      break;
    }
  return inst;

}
/* Get Opcode******************/
char *get_opcode(char *array){
  char opcode[OPCODE_SIZE];
  char *tmp = malloc(ADDR_SIZE);
  char *tmp2 = malloc(OPCODE_SIZE);
  memcpy(tmp,array,ADDR_SIZE);
  for(int i = 0;i < 6;i++) {
    opcode[i]=tmp[i];
  }
  free(tmp);
  memcpy(tmp2,opcode,OPCODE_SIZE);
  return tmp2;
}
char *get_rs(char *array){
  char arr[5];
  char format[ADDR_SIZE];
  char *tmp2 = malloc(5);
  memcpy(format,array,ADDR_SIZE);
  for(int i = 0;i < 5 ;i++) {
    arr[i] = format[6+i];
  }
  memcpy(tmp2,arr,5);
  return tmp2;
}
char *get_rt(char *array){
  char arr[5];
  char format[ADDR_SIZE];
  char *tmp2 = malloc(5);
  memcpy(format,array,ADDR_SIZE);
  for(int i = 0;i < 5 ;i++) {
    arr[i] = format[11+i];
  }
  memcpy(tmp2,arr,5);
  return tmp2;
}
char *get_rd(char *array){
  char arr[5];
  char format[ADDR_SIZE];
  char *tmp0 = malloc(5);
  memcpy(format,array,ADDR_SIZE);
  for(int i = 0;i < 5 ;i++) {
    arr[i] = format[16+i];
  }
  strncpy(tmp0,arr,5);
  return tmp0;
}
char *get_unused(char *array){
  char arr[11];
  char format[ADDR_SIZE];
  char *tmp = malloc(11);
  memcpy(format,array,ADDR_SIZE);
  for(int i = 0;i < 11 ;i++) {
    arr[i] = format[21+i];
  }
  strncpy(tmp,arr,11);
  return tmp;
}

char *get_immediate(char *array){
  char arr[16];
  char format[ADDR_SIZE];
  char *tmp = malloc(16);
  memcpy(format,array,ADDR_SIZE);
  for(int i = 0;i < 16 ;i++) {
    arr[i] = format[15+i];
  }
  memcpy(tmp,arr,16);
  return tmp;
}

char *get_type(char *array){

  char type[3];
  if( strncmp(array,"ADD",3)&&
      strcmp(array, "XOR")&&
      strcmp(array, "AND")&&
      strcmp(array, "MUL")&&
      strcmp(array, "SUB")&&
      strcmp(array, "OR")
      ){
    strncpy(type,"R",2);
  }
  else{
    strncpy(type,"I",2);
  }
  char *tmp = malloc(4);
  memcpy(tmp, type, 2);
  return tmp;
    
}

