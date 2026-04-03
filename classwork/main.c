
#include <stdio.h>
#include <stdlib.h>

float cel, far,interval;
int lower, upper;

int main ()
{
lower=0;
upper=1000;
interval=10;
far=lower;
 //print table header
 printf("Farenheit\tcelcius\n");
	while (far<=upper)
	{
	cel=5*(far-32)/9;
	printf("|%10.3f |\t%10.3f|\n", far, cel);
	printf(".........................\n");
	far=far+interval;

	}

return 0;
}


