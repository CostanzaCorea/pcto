#include <stdio.h>

int main()
{
    int a[5] = {2,1,3,7,5};
    int c = 0;
    int c2 = 1;
    int tmp;
    int b = 1;
    int f = 0;
    while (b>0)
    {
        b = 0;
        c = 0;
        c2 = 1;
        while (c2<5)
    {
        if (a[c]> a[c2])
        {
            tmp = a[c];
            a[c]= a[c2];
            a[c2] = tmp;
            b = b + 1;
        }
        c = c + 1;
        c2 = c2 + 1;
    }
    }
    while (f<5)
    {
        printf ("%d\n", a[f]);
        f = f + 1;

    }
}