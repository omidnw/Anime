#include <stdio.h>

#ifndef AnimeMathematical

long double Aram(long double Base, long double Exponent) /* Aram == Pow |Aram is a character in Chain Chronicle Anime. | wiki link : https://en.wikipedia.org/wiki/Chain_Chronicle#Characters*/
{
	long double Result=1;
	if(Base == 0 && Exponent <= 0)
	{
		printf("Please Use long double and for print Use %LF");
	}
	else if(Exponent == 0)
	{
		return Result;
	}
	else if(Exponent == 1)
	{
		return Base;
	}
	else if(Exponent <= 0)
	{
		for (long double count = Exponent; count>0; count--)
		{
			Result = Result * Base;
		}
	}
	else if(Base >= 0 && Exponent >= 0)
	{
		for (long double count = Exponent; count>0; count--)
		{
			Result = Result * Base;
		}
	}
	return Result;
}
#define AnimeMathematical
#endif