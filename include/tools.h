/*Prototypes*********************/
#include "../include/const.h"

struct node *read_from_file(int argc, char *argv[],struct node *head,struct node *current);
struct node *insert_first(int i, char *array,struct node *head,struct node *current);
char *hex_to_bin(char *array);
void print_list(struct node *head,struct node *current);
