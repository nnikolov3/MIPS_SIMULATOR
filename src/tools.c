#include "../include/tools.h"
/**************************/
void read_from_file(int argc, char* argv[]){
  FILE *fp;
  struct data line;
  int n, nol, i;
  /*Open file*/
  fp = fopen(argv[1],"rb");
  if (fp == NULL) {
    perror("%s file does not exist \n");
    exit(1);
  }
  fseek(fp, 0L, SEEK_END);
  n = ftell(fp);
  nol=n/sizeof(struct data);
  for (i=1;i<=nol;i++)
    {
      fseek(fp,sizeof(struct data)*i,SEEK_END);
      fread(&line,sizeof(struct data),1,fp);
      puts(line.str);
    }
  fclose(fp);
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

/*************************/
void convert_hex_to_bin()
{
  //converts hex to binary
}
