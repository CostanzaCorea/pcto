#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;
  printf ("inserisci tre numeri");
  scanf ("%d %d %d", &a, &b, &c);
  if (b - a == c - b)
  {
    printf ("i numeri inseriti sono una progressione aritmetica");
  }
  else 
  {
    printf ("i numeri inseriti non sono una progressione aritmetica");
  }
}
