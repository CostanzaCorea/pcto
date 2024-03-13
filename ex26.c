#include <stdio.h>

int main()
{
  int a[5]= {12,15,13,21,1};
  int b = 0;
  int c;
  int n_piccolo;
  
  // questa parte mette tutto in ordine
  while (b<5)
  {
    c=0;
    while(c<5)
    {
      if(a[c]>a[b])
      {
        n_piccolo = a[b];
        a[b]= a[c];
        a[c] = n_piccolo;
      }
      c = c + 1;
    }
      b = b + 1;
  }

  // finito di mettere in ordine
  b = 0;
  while(b < 5)
  {
    printf("%d\n", a[b]);
    b = b +1;
  }

}