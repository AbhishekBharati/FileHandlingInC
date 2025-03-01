#include<stdio.h>

int main(){
  FILE *file;
  file = fopen("./fopen/test.txt", "r");

  if(file == NULL){
    printf("File can't be opened");
    return -1;
  }

  printf("Starting Position :- %ld \n", ftell(file)); // Start mei position 0 hogi.

  char ch = fgetc(file); // Ek char read krega :-
  printf("Read Character :- %c\n", ch);

  printf("Current Position :- %ld\n", ftell(file));

  printf("Using Fseek() :- \n");
  fseek(file, 3, SEEK_CUR);

  printf("New Position :- %ld \n", ftell(file));
  ch = fgetc(file);
  printf("Char at new Position :- %c\n", ch);

  rewind(file); // file pointer ko start mei le jaana :-
  ch = fgetc(file);
  printf("Char at begining :- %c\n", ch);
  fclose(file);

  return 0;
}
