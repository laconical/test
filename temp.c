#include <stdio.h>
#define u = 300;
#define l = 0;
#define s = 20
main()
{
float fa, ce;
float u,l,s;
ce= u;
printf("\t\t\ntable to show the temperature conversions\n ");
while(ce >= l)
	{
		fa = (9.0/5.0) * (ce+32.0);
		printf("\n%6.0f %12.1f\n", fa, ce);
		ce -= s;
		
	}
}
