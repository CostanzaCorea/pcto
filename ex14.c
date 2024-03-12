#include <stdio.h>

int main()
{
   int a;
   printf ("inserisci un anno");
   scanf ("%d", &a);
   if (a % 400 == 0)
   {
    printf ("anno è bisestile");
   }
   else
   {
    printf ("anno non è bisestile");
   }
}