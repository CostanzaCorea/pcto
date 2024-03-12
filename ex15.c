#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   printf ("inserisci tre lunghezze");
   scanf ("%d %d %d", &a, &b, &c);
   if (a + b> c) 
   {
    printf ("si tratta di un trinagolo");
   }
   else if (b + c> a)
   {
    printf ("si tratta di un trinagolo");
   }
   else if (c + a> b)
   {
    printf ("si tratta di un trinagolo");
   }
   else
   {
    printf ("non si tratta di un triangolo");
   }
}