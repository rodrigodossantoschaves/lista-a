#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num1,num2,num3,num4;
	printf ("Digite quatro numeros \n "  );
	printf ("1�");
	scanf("%d",&num1);
	printf ("2�");
	scanf("%d",&num2);
	printf ("3�");
	scanf("%d",&num3);
	printf ("4�");
	scanf("%d",&num4);
	if ((num1>num2) && (num1>num3) && (num1>num4))
	{
		printf ("A soma dos menores eh : %d ",num2+num3+num4);
	}
	if ((num2>num1 && num2>num3 && num2>num4))
	{
		printf ("A soma dos menores eh : %d \n ",num1+num3+num4);
	}
	if ((num3>num1 && num3>num2 && num3>num4))
	{
		printf ("A soma dos menores eh : %d \n ",num1+num2+num4);
	}
	if ((num4>num1 && num4>num2 && num4>num3))
	{
		printf ("A soma dos menores eh : %d \n ",num1+num2+num3);
	}
	
	system ("pause");
	return 0;
	
	
	
}
