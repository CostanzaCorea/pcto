#include <stdio.h>
double squrt(double x)
{
if (x > 1)
{
    double p = x;
    double r = (p + (x/p))/2;
    while ((p-r)>= 0.00001)
    {
        p = r;
        r = (p + (x/p))/2;
    }
    return r;
}
else if (x==0 || x==1)
{
    return x;
}

}

int perimetro (int a, int b, int c)
{
  return a + b + c;
}
double area (double perimetro, int a, int b, int c)
{
    double perimetro_mezzo = perimetro / 2;
    
    return squrt(perimetro_mezzo * (perimetro_mezzo - a) * (perimetro_mezzo - b) * (perimetro_mezzo - c));   
}

int main ()
{
    int a;
    int b;
    int c;
    double x;
    double perimetro_triangolo;
    printf ("inserisci tre dimensioni");
    scanf ("%d %d %d", &a, &b, &c);
    perimetro_triangolo = perimetro(a,b,c);
    x = area(perimetro_triangolo, a, b, c);
    printf ("%lf\n",x);
    printf ("%lf\n",perimetro_triangolo);
}