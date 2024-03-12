#include <stdio.h>

int main()
{
    int prezzo = 5;
    int pezzi = 1;
    float costo;
    while (pezzi >= 0)
    {
        printf ("inserisci numero di pezzi");
        scanf ("%d", &pezzi);
        if (pezzi >= 31 && pezzi <= 49)
        {
            costo = (float)90/100 * 5 * pezzi;
            printf ("%f", costo);
        }   
        else if (pezzi > 50)
        {
            costo = (float)85/100 * 5 * pezzi;
            printf ("%f", costo);
        }
        else  
        {
            costo = 5 * pezzi;
            printf ("%f", costo);
        }
    } 
}