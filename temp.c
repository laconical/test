main()
{
float fa, ce;
float u,l,s;
u= 300;
l=0;
s= 20;
ce= u;
printf("\t\t\ntable to show the temperature conversions\n ");
while(ce >= l)
	{
		fa = (9.0/5.0) * (ce+32.0);
		printf("\n%6.0f %12.1f\n", fa, ce);
		ce -= s;
		
	}
}
