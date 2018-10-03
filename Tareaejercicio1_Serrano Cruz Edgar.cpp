#include<stdio.h>

main(void)
{
	int n;
	printf("Ingrese un numero\n");
	scanf("%d", &n);
	if (n%2==0)
	{
		printf("%d es par", n);
	}
	else
	{
		printf("%d es impar", n);
	}
	getchar();
	getchar();
	return 0;
}

	


