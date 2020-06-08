#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define MAX_SIZE 1024
#define BUFF_SIZE 9
#define ADDR_SIZE 33

/*Prototypes*********************/
char* read_from_file(int argc, char* argv[]);
char* get_array(int argc, char* argv[]);
void insert_first(int i,char (*array)[BUFF_SIZE]);
void print_list();
char* hex_to_bin(char (*array)[BUFF_SIZE]);
