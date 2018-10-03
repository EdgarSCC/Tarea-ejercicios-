#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int modulo,n,elev;
	printf("Introduce el numero: ");
	scanf("%d",&n);
	modulo=n%2;
	if(modulo==0)
	{
		printf("\nEl numero es par");
		elev=pow(n,2);
			printf("\nEl numero elevado al cuadrado es: %d ",elev);
	}
	else
	{
		printf("\nEl numero es impar");
		elev=pow(n,3);
			printf("\nEl numero elevado al cubo es: %d ",elev);
	}
	return 0;
	getch();
}
