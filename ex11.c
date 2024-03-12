#include <stdio.h>

int main()
{
    int a;
    int b;
    printf ("inserisci due numeri");
    scanf ("%d %d", &a, &b);
    if (a % b==0)
    {
        printf ("a è multiplo di b");
    }
    else
    {
        printf ("a non è multiplo di b");
    }
}