#include<stdio.h>

int main(){
  FILE *file;
  char ch;

  file = fopen("test.txt", "a+");

  if(file == NULL){
    printf("Failed to open the file, May be the file doesn't exist");
  }

  rewind(file); // File ke pointer ko start mei le jaane ke liye.
  printf("Existing Content File");

  while((ch = fgetc(file)) != EOF){
    putchar(ch); // Char by Char print krega.
  }

  char data[100];
  printf("Iske aage aapko jo daalna hai input do. \n");
  fgets(data, sizeof(data), stdin); // User se line by line input lena.

  fprintf(file, "%s", data); // File mei data write krna.

  fclose(file);
  printf("Data file mei append ho gaya... \n");

  return 0;
}
