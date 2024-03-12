#include <stdio.h>

int main()
{
    int a;
    int b;
    printf ("inserisci due età");
    scanf ("%d %d", &a, &b);
    if (a>b)
    {
        printf ("utente può prendere la patente");
    }
    if (a<b)
    {
        printf ("utente non può prendere la patente");
    }

}