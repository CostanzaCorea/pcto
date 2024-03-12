#include <stdio.h>

int main()
{
    int a;
    printf ("inserisci un numero");
    scanf ("%d", &a);
    int b;
    int c = 0;
    b = a - 1;
    while (b > 1)
    {
       if (a % b == 0)
       {
        c = c + 1;
       }
    b--;
    }
    if (c != 0)
    {
        printf ("il tuo numero non è primo");
    }
    else
    {
        printf ("il tuo numero è primo");
    }
}