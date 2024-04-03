#include <stdio.h>
int main() 
{
  int numero, h, b;

  // Inserimento del numero
  printf("Inserisci un numero intero: ");
  scanf("%d", &numero);

  // Inizializzazione delle variabili
  h = numero;
  b = 1;

  // Ciclo di Erone
  while (h - b > 0.001) 
  {
    // Calcolo della media
    int m = (h + b) / 2;

    // Nuovo valore di b
    b = numero / m;

    // Aggiornamento di h
    h = m;
  }

  // Stampa del risultato
  printf("La radice quadrata di %d è circa %d\n", numero, h);

  return 0;
}
