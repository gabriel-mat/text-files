#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *file;

  file = fopen("source.txt", "a"); // 'a' stands for "append"
  
  if (file == NULL){
    printf("fail: source file does not exist.\n");
    return 0;
  }

  fprintf(file, "\n:)\n");

  fclose(file);
  
  return 0;
}
