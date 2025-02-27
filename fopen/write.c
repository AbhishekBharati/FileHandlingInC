#include<stdio.h>

int main(){
  FILE *file;
  file = fopen("test.txt", "w");

  if(file == NULL){
    printf("File create nhi ho skti...");
    return 1;
  }

  fprintf(file, "Hello, Nodix this side using fprintf! \n");
  fputs("This time using fputs... \n", file);
  fputc('A', file);

  fclose(file);

  printf("Data is successfully Added to the file...");
  return 0;
}
