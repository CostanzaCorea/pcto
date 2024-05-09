#include <stdio.h>
#include <math.h>

double logaritmo10(double numero) 
{
  if (numero <= 0) {
    printf("Errore: Impossibile calcolare il logaritmo di un numero non positivo.\n");
    return NAN;
  }

  // Fase 1: Scomposizione del numero in un prodotto di 10^k e di un fattore vicino all'unità
  int k = 0;
  while (numero > 10) {
    numero /= 10;
    k++;
  }
  double fattore = numero;

  // Fase 2: Ciclo di iterazioni per approssimare il logaritmo
  double logaritmo = 0;
  while (fabs(fattore - 1) > 1e-6) {
    // Calcolo del logaritmo usando la formula di Briggs
    double deltaLogaritmo = log(fattore) / log(10);
    logaritmo += deltaLogaritmo;

    // Aggiornamento del fattore
    fattore = (fattore - 1) / fattore;
  }

  // Fase 3: Combinazione del logaritmo con l'esponente di 10
  logaritmo += k * log(10);

  return logaritmo;
}

int main() {
  double numero;
  printf("Inserisci un numero positivo: ");
  scanf("%lf", &numero);

  double logaritmo = logaritmo10_Briggs(numero);
  printf("Il logaritmo in base 10 di %lf è: %lf\n", numero, logaritmo);

  return 0;
}
