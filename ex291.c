#include <stdio.h>
double sqrt (double x)
{
    double a = 0.0001;
    if (x<0)
    {
        printf ("error");
    }
    if (x == 0 || x == 1)
    {
        return x;
    }
    if (x>0)
    {
        while (x>= a*a)
        {
            a += 0.0001;
        }
        return a;
    }

}
int main ()
{
    double a;
    printf ("inserisci un numero e io farò la radice\n");
    scanf ("%lf", &a);
    printf ("la radice è %.1lf" sqrt(a));
}