#include "../include/tools.h"
#include "../include/const.h"

int lock = 0;

/*Prints LLL******************/
void print_list(struct node *head,struct node *current) {
  int i;
  char *decor = "=";
  struct node *ptr = head;
  if (lock == 0){
  printf("PRINT ALL MEMORY ");
  printf("|Address===HEX========|BINARY|====|\n");
  //start from the beginning
  while(ptr != NULL) {
    printf("\r|%016x|" "%s|" "%s|" "|",ptr->address,ptr->content,ptr->bin_content);
    ptr = ptr->next;
  }
  i = 0 ;
  printf("\r\n ");
  while(i < 51 ){if(i==50){printf("DONE\r\n");}
    else{printf("%s",decor);}
    i++;
  }
  }
  lock = 1;
}
/*Insert********************/
struct node *insert_first(int i, char *array,struct node *head,struct node *current){
  
  struct node *newregister = (struct node*) malloc(sizeof(struct node));
  newregister -> address = i; // store the address)
  memcpy(newregister -> content,array,BUFF_SIZE);//store the content
  memcpy( newregister -> bin_content,hex_to_bin(array),ADDR_SIZE);//store in LL
  /* Next *************/
  newregister -> next = head;
  head = newregister;
  return head;
}
/**************************/
/*Converts the input to bin*/
char *hex_to_bin(char *array){
  char hex[BUFF_SIZE], bin[ADDR_SIZE]="";
  memcpy(hex,array,BUFF_SIZE);
  char *binary=malloc(ADDR_SIZE * sizeof(char));
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
  memcpy(binary,bin,ADDR_SIZE);
  return binary;
}
/* Read from file ******/
/* Read the memory image */
struct node *read_from_file(int argc, char *argv[],struct node *head,struct node *current){
  FILE *stream;
  int i =0;
  char *memory_image = malloc(BUFF_SIZE);
  size_t totalBytesRead = 0;
  size_t bytesAllocated = BUFF_SIZE;
  char line[BUFF_SIZE];
  /*Open file--------------------------*/
  stream = fopen(argv[1],"rb");
  if (stream == NULL)
    {
      fprintf(stderr, "failed to open input.txt\n");
      exit(1);
    }
  /*---------------------------------*/
  while (fgets(line, BUFF_SIZE, stream)) {
    size_t bytesRead = strlen(line);
    size_t bytesNeeded = totalBytesRead + bytesRead + 1;
    if (bytesAllocated < bytesNeeded) {
      char *newPtr = realloc(memory_image, bytesAllocated + BUFF_SIZE);
      if (newPtr) {
	memory_image = newPtr;
	bytesAllocated +=BUFF_SIZE;
      }
      else {
	// Out of memory.
	free(memory_image);
        exit(1);
      }
    }
    memcpy(memory_image + totalBytesRead, line, bytesRead);
    head = insert_first(i,line,head,current);
    totalBytesRead += bytesRead;
    i=i+4;;
  }
  memory_image[totalBytesRead] = '\0';
  print_list(head,current);
  fclose(stream);
  return head;
}

    
    
