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


double squrt (double x)
{
    double a = 0.0001
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
            a += 0.0001
        }
        return a;
    }

}
int main ()
{
    double a;
    printf ("inserisci un numero e io farò la radice\n");
    scanf ("%lf", &a);
    printf ("la rdice è %.1f" squrt(a));
}