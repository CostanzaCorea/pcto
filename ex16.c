#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;
  printf ("inserici tre lunghezze");
  scanf ("%d %d %d", &a, &b, &c);
  if (a == b == c) 
  {
    printf ("il traigolo è equilatero");
  }
  else if (a == b)
  {
    printf ("il triangolo è isoscele");
  }
  else if (b == c)
  {
    printf ("il triangolo è isoscele");
  }
  else if (c == a)
  {
    printf ("il triangolo è isoscele");
  }
  else
  {
    printf ("il triangolo non è isoscele");
  }

}