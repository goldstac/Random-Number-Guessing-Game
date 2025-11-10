#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *file = fopen("youwon.txt","r");
  if (file == NULL) {
    return 1;
  }
  char data[256];
  while (fgets(data,sizeof(data),file)) {
    printf("%s",data);
  }
  fclose(file);
  return 0;
}
