#include <stdio.h>
#include <stdlib.h>
main(void)
{
	int n, m, o;
	printf("Insertar 3 numeros: ");
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &o);
	if (n>m, n>o)
	printf("El mayor de todos los numeros es: %d", n);
	else
	if (m>n, m>o)
	printf("El mayor de todos los numeros es: %d", m);
	else 
	if (o>n, o>m)
	printf("El mayor de todos los numeros es: %d", o);
	
		
	getchar();
	return 0;
}

