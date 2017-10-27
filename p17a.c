#include <stdio.h>
int f(int x)
{
    do
    {int j=x%10;
        if(j%3==0)
        {z++3}
        x=x/10;
    }
    while (x>=0);
    return z;
}
