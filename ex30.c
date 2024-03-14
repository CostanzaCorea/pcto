#include <stdio.h>

int main()
{
    int x;
    int y;
    printf ("inserisci le coordinate di un punto");
    scanf ("%d %d", &x, &y);
    if (x>0 && y>0)
    {
        printf ("il punto si trova nel primo quadrante");
    }
    else if (x<0 && y>0)
    {
        printf ("il punto si trova nel secondo quadrante");
    }
    else if (x>0 && y<0)
    {
        printf ("il punto si trova nel terzo quadrante");
    }
    else if (x>0 && y<0)
    {
        printf ("il punto si trova nel quarto quadrante");
    }
}