#include <stdio.h>
#define upper 300
#define lower  0
#define step  20
void main()
{
float fa, ce;

ce= upper;
printf("\t\t\ntable to show the temperature conversions\n ");
while(ce >= lower)
	{
		fa = (9.0/5.0) * (ce+32.0);
		printf("\n%6.0f %12.1f\n", fa, ce);
		ce -= step;
		
	}
}
