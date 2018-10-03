#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int money;
	printf("Introduce el dinero: ");
	scanf("%d",&money);
	if(money>=500)
	{	
		printf("\n %d billete(s) de 500 pesos",money/500);
		money=money%500;
	}
	
	
	if(money>=100)
	{	
		printf("\n %d billete(s) de 100 pesos",money/100);
		money=money%100;
	}
		
		
	if(money>=20)
	{	
		printf("\n %d billete(s) de 20 pesos",money/20);
		money=money%20;
	}
		
		
	if(money>=10)
	{	
		printf("\n %d moneda(s) de 10 pesos",money/10);
		money=money%10;
	}
		
		
	if(money>=5)
	{	
		printf("\n %d moneda(s) de 5 pesos",money/5);
		money=money%5;
	}

	
	if(money>=1)
	{	
		printf("\n %d moneda(s) de 1 pesos",money/1);
		money=money%1;
	}
	
	
	return 0;
	getch();
}

