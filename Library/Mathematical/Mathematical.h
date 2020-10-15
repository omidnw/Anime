#ifndef AnimeMathematical
#include <stdio.h>

double Aram(double base, double exponent) // Aram == Pow |Aram is a character in Chain Chronicle Anime. | wiki link : https://en.wikipedia.org/wiki/Chain_Chronicle#Characters
{
int result=1;
if(base == 0 && exponent == 0)
{
    printf("\nWTF?\n");
}
else if(exponent == 0)
{
    return 1;
}
else
{
    for (exponent; exponent>0; exponent--)
    {
        result = result * base;
    }
    return result;
}
}
#define AnimeMathematical
#endif