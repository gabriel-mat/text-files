#include <stdio.h>
#include <stdlib.h>

int main(){
  char *str;
  FILE *read, *write;

  read = fopen("source.txt", "r");
  write = fopen("final.txt", "w");

  fscanf(read, " %20[^\n]", str);

  printf("source message: %s\n", str);

  fprintf(write, str);

  fclose(read);
  fclose(write);
  
  return 0;
}
