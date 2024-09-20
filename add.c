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
  int sum = a+b;

  printf("%d\n",sum);

  return 0;
}
