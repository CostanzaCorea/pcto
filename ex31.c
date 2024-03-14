#include <stdio.h>
#include<stdlib.h>
#define MAX 100
#define MIN 0
#define TENTATIVI 10

int main()
{
	int num;
    int inserito;
    int tentativi;

    tentativi = TENTATIVI;
    num = rand()%(MAX-MIN+1)+MIN;

    printf("Il computer ha generato un numero casuale, prova ad indovinarlo!\n");
	printf("Hai %d tentativi. Inserisci un numero: ", TENTATIVI);
    scanf("%d", &inserito);

	while(inserito != num)
    {
        if(num > inserito)
        {
            printf("Il numero che stai cercando è più grande.\n");
        } 
        else 
        {
            printf("Il numero che stai cercando è più piccolo.\n");
        }
        tentativi--;
        if(tentativi == 0)
        break;
        printf("Hai ancora %d tentativi/o a disposizione. Inserisci un numero: ", tentativi);
        scanf("%d", &inserito);
    }
    if(tentativi == 0)
    {
        printf("Peccato hai terminato i tuoi tentativi. Il numero ricercato era: %d\n", num);
    } 
    else 
    {
        printf("Congratulazioni hai indovinato il numero. [%d]\n", num);
    }
	return 0;
}