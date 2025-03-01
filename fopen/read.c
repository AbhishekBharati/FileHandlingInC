#include <stdio.h>

int main(){
  FILE *file;
  char data[100];

  file = fopen("test.txt", "r");

  if(file == NULL){
    printf("Failed to open the file. The file might not exist...");
  }

  printf("Content of File : \n");

  while(fgets(data, sizeof(data), file) != NULL){
    printf("%s", data); // Line by line print krega.
  }

  printf("\n");
  fclose(file);
  file = fopen("test.txt", "r");

  char word[50];
  while(fscanf(file, "%s", word) != EOF){
    printf("%s\n", word); // Yeh ek ek word ko read krega :-
  }

  printf("\n");
  fclose(file);
  file = fopen("test.txt", "r");
  char ch;
  while((ch = fgetc(file)) != EOF){
    putchar(ch); // Character print krega.
  }

  fclose(file);
  return 0;
}
