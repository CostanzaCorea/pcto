#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   printf ("inserisci tre lunghezze");
   scanf ("%d %d %d", &a, &b, &c);
   if (a == b && b == c)
   {
    printf ("allora il triangolo è equilatero");
   }
   else if (a != b && b != c && c != a)
   {
    printf ("allora il triangolo è scaleno");
   }
  else if ((a == b && b != c) ||(b == c && c != a) || (c == a && a != b) )
   {
    printf ("allora il triangolo è isoscele");
   }
}