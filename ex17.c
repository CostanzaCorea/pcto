#include <stdio.h>

int main()
{
   int a;
   int b;
   printf ("che anno sei nato?");
   scanf ("%d", &a);
   b = 1969;
   if (a > b)
   {
      printf ("sei nato %d dopo dell'anno scelto",a - b);
   }
   else if (a < b)
   {
      printf ("sei nato %d prima dell'anno scelto",b - a);
   }
   else
   {
      printf ("sei nato lo stesso anno");
   }
}