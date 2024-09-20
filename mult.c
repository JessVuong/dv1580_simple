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
  //printf("%d\n", IsNum(argv[1], strlen(argv[1])));

  if (argc < 3)
  {
    printf("Invalid amount of arguments\n");
    return -1;
  }

  if(IsNum(argv[1], strlen(argv[1])) != 0)
  {
    printf("Argument 1 is not a number: %s\n", argv[1]);
  }
  
  if(IsNum(argv[2], strlen(argv[2])) != 0)
  {
    printf("Arguemnt 2 is not a number: %s\n", argv[2]);
  }
  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float product = a*b;

  printf("%.2f\n", product);
  
  return 0;
}
