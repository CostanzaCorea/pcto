#include <stdio.h>

int main()
{
    int a;
    int b;
    printf ("inserisci due numeri\n");
    scanf ("%d %d", &a, &b );
    if (a>b)
    {
        printf ("a è maggiore di b");
    }
    if (a<b)
    {
        printf ("a è minore di b");
    }
}