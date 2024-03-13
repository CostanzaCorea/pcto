#include <stdio.h>

void saluto ()
{
    printf ("ciao costanza\n");
    printf ("come stai?\n");
}

int somma (int a, int b)
{
  return a + b;
}

int differenza (int a, int b)
{
    return a - b;
}
int moltiplicazione (int a, int b)
{
    return a*b;
}
int divisione (int a, int b)
{
    return a/b;
}
int main()
{
    int num1 = 6;
    int num2 = 8;
    int risultato;
    int risultato1;
    int risultato2;
    int risultato3;
   saluto();
   printf ("ïnserisci due numeri e ti restituirò il risultato delle operazioni algebriche\n");
   scanf ("%d %d", &num1, &num2);
   
  risultato = somma(num1,num2);
  printf ("%d\n",risultato);
  risultato1 = differenza(num1, num2);
  printf ("%d\n",risultato1);
  risultato2 = moltiplicazione(num1, num2);
  printf ("%d\n",risultato2);
  risultato3 = divisione(num1, num2);
  printf ("%d\n",risultato3);
    
}
