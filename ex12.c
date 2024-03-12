#include <stdio.h>

int main()
{
    float t;
    float k;
    float f;
    printf ("inserisci una temperatura in celsius");
    scanf ("%f", &t);
    k= t + 273.15;
    f= 1.8*t + 32;
    printf ("temperatura inserita è %f %f", k, f);
}