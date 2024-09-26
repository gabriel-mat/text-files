#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

void cp(FILE *src, FILE *dest);

int main(){
  FILE *f1, *f2;

  f1 = fopen("source.txt", "r");
  f2 = fopen("output.txt", "w");

  cp(f1, f2);

  fclose(f1);
  fclose(f2);

  return 0;
}

void cp(FILE *src, FILE *dest){
  char str[MAX_SIZE + 1];

  if(src == NULL){
    printf("fatal: the source file does not exist.\n");
    exit(EXIT_FAILURE);
  }
  
  while(fgets(str, MAX_SIZE, src) != NULL)
  fputs(str, dest); 
}
