#include "../include/const.h"
#include "../include/instruction_fetch.h"
#include "../include/tools.h"

struct node *head;
struct node *current;

uint32_t address = 0;

int main(int argc, char* argv[]){

      wrapper(argc, argv,head,current,address);
  return 0;
}
