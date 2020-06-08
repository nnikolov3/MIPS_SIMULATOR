#include "../include/tools.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>

/* Linked List ***********/
struct node
{
  int address;
  char content[BUFF_SIZE];
  char bin_content[ADDR_SIZE];
  char opcode[7];
  struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
/*************************/
/*Get Array**************/
char* get_array(int argc, char*argv[]){
 char (*array)[BUFF_SIZE]=NULL;
  array = read_from_file(argc, argv);
  for (int i = 0;i < MAX_SIZE; i++){
    insert_first(i,array[i]);// Inser in the LL
  }
  printf("\||\t  HEX\t|========|\tBINARY\t|=============|OPCODE|==|\n");
   print_list();
  printf("\n|DONE================================================================================|\n");
  return 0;
}

/*display the list*************/
void print_list() {
   struct node *ptr = head;
   //start from the beginning
   while(ptr != NULL) {
     printf("|%sH|_|%s|_|%s|",ptr->content,ptr->bin_content,ptr->opcode);
     ptr = ptr->next;
   }
}
/*Insert********************/
void insert_first(int i,char (*array)[BUFF_SIZE]){
  struct node *newregister = (struct node*) malloc(sizeof(struct node));
  newregister -> address = i;
  char *tmp2 = malloc(ADDR_SIZE * sizeof(char));
  /*Add HEX contents */
  memcpy( newregister -> content,array,BUFF_SIZE);
   /* Add HEX to Binary */
  tmp2 = hex_to_bin(array);
  memcpy( newregister -> bin_content,tmp2,ADDR_SIZE);
  /* Add OpCode */
  char *tmp3 = malloc(ADDR_SIZE * sizeof(char));
  tmp3 = get_opcode(tmp2);
  memcpy( newregister -> opcode,tmp3,OPCODE_SIZE);
  
  /* Next *************/
  newregister -> next = head;
  free(tmp2);
  free(tmp3);
  head = newregister;
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

/**************************/
char *hex_to_bin(char (*array)[BUFF_SIZE]){
  char hex[BUFF_SIZE], bin[ADDR_SIZE]="";
  
  memcpy(hex,array,BUFF_SIZE);
  //printf("%s\n",hex);
  int i = 0;

    /* Extract first digit and find binary of each hex digit */
    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
	      break;
        }
    }
    char *tmp = malloc(ADDR_SIZE * sizeof(char));
    memcpy(tmp,bin,ADDR_SIZE);
    return tmp;
}

/*************************/
void breakdown_of_instruction_frequencies()
{
  //
  
}
/*************************/
void record_total_number_of_instructions()
{

}
/*************************/
void record_registers_and_memory_that_changed_states()
{

}
/*************************/
/* Read from file ******/
char* read_from_file(int argc, char* argv[]){
  FILE *stream;
  char (*lines)[BUFF_SIZE] = NULL;
  int n = 0;
  /*Open file*/
  stream = fopen(argv[1],"rb");
  if (stream == NULL)
    {
      fprintf(stderr, "failed to open input.txt\n");
      exit(1);
    }
  if (!(lines = malloc (MAX_SIZE * sizeof *lines))) { /* allocate MAXL arrays */
        fprintf (stderr, "error: virtual memory exhausted 'lines'.\n");
        exit(1);
    }
  while(n<MAX_SIZE && fgets(lines[n],BUFF_SIZE,stream)>0){
    
    n++;
  }
  fclose(stream);
  return lines;
}
