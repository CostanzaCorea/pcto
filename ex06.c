#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);
    if (a>10)
    {
        printf ("a è maggiore di 10");
    }
    else if (a==5)
    {
        printf ("a è uguale a 5");
    }
    else if (a>5)
    {
        printf ("a è maggiore di 5");
    }
    else 
    {
        printf ("a è minore di 5");
    }
}