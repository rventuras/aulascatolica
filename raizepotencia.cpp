#include <stdio.h>
#include <math.h>
int main (){
	int num, pot, quadr;
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	if (num > 0)
	{
		pot = pow(num,2);
	    quadr = sqrt(num);
		printf( "A potencia de %d eh %d e a raiz eh %d", num, pot, quadr);
	}
	
}
