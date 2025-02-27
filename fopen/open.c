#include<stdio.h>

int main(){
  FILE *file;

  file = fopen("test.txt", "r");

  if(file == NULL){
    printf("We failed to open the file, Maybe the file doesn't exist");
  } else {
    printf("File opened Successfully..");
    fclose(file);
  }

  return 0;
}
