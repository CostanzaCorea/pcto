#include <stdio.h>

int main()
{
    int a;
    printf ("inserisci un numero");
    scanf ("%d",&a);
    if (a>18)
    {
        printf ("utente è maggiorenne");
    }
    if (a<18)
    {
        printf ("utente è minorenne");
    }
}