#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if (argc < 3)
  {
    printf("Invalid amount of arguments\n");
    return -1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int dif = a-b;

  printf("%d\n", dif);

  return 0;
  return 0;
}
