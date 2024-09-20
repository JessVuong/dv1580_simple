#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int IsNum(char* str, size_t size)
{
  int i = 0;
  int dot = 0;
  
  if(size<0)
  {
    return 1;
  }
  if(str[0] == '-'|| str[0]== '+')
  {
    ++i;
  }

  for(; i < size; ++i)
  {
    if(str[i] == '.')
    {
      if(dot==1)
      {
        return 2;
      }
      dot = 1;
      continue;
    }

    if(!('0'<=str[i] && str[i]<='9'))
    {
      return 3;
    }

  } 
  return 0;
}


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
