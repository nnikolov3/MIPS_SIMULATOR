#include "../include/pipeline.h"
#include "../include/tools.h"
#include "../include/instruction_fetch.h"
#include "../include/const.h"

uint8_t mem_read = 0;
uint32_t PC = 0;
int counter  = 0;
int mem_lock = 0;
char state[4];

struct mips {
  int addr;
  int result;
  struct mips *next;
};

  struct mips *memory;

int mips(int argc,char *argv[],struct node *head,struct node *current, uint32_t address){
  PC = 0;
  address = PC;
  char (*binary) = malloc(ADDR_SIZE);
  int result; 
  head = read_from_file(argc, argv,head, current);
  while (head != NULL){
  counter = 0;
  binary = get_binary(PC,head,current);
  instruction_fetch_wrapper(PC, mem_read,argc, argv,head,current,binary,address,state);
  counter = counter +1;//next state
  update_state(state,counter);//update state
  instruction_decode_wrapper(PC, mem_read,argc, argv,head,current,binary,state);
  counter +=1;//next state
  update_state(state,counter); //update state
  result = execute(PC, mem_read,argc, argv,head,current,binary,state);
  counter +=1;//next state
  update_state(state,counter); //update state
  printf("|" "MIPS->" "|%s|\r",state);
  struct mips *mem = (struct mips*) malloc(sizeof(struct mips));
  mem -> addr = address; // store the address)
  mem -> result = result; 
  /* Next *************/
  counter +=1;//next state
  update_state(state,counter); //update state
  printf("|" "MIPS->" "|%s|\r",state);
  mem  -> next = memory;
  memory = mem;
  head = head -> next;
  PC = PC + 4;
  }
   if(head->next == NULL)
      {exit(0);}

  return 0;
}

int wrapper(int argc,char *argv[],struct node *head,struct node *current, uint32_t address){

  update_state(state,counter);
  return mips (argc, argv,head,current,address);

}
void update_state(char state[4],int counter){
 char stage[4];
  switch(counter)
    {
    case 0:
      strncpy(stage, "IF",3);
      break;
    case 1:
      strncpy(stage, "ID",3);
      break;
    case 2:
      strncpy(stage, "EX",3);
      break;
    case 3:
      strncpy(stage, "MEM",4);
    case 4:
      strncpy(stage, "WB",3);
      break;
    }
  strncpy(state,stage,4);

}
