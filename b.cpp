#include <stdio.h>

int main()
{
	int judge = 1;//1表示为素数
	int number = 100;
	printf("2 ");
	for (int n = 3; n <= number; n++)
	{
		judge = 1;
		for (int m = 2; m < n; m++)
		{
			if (n % m == 0)
			{
				judge = 0;
				break;
			}
		}
		if (judge == 1)
		{
			printf("%d ", n);
		}	
	}
	return 0;
}