#include <stdio.h>

main()
{
char c;
if (c=(getchar()== EOF))
	printf("%d at end ",c);
else
	printf("%d",c); 
}
