#include<stdio.h>
#include<stdlib.h>

double pow(double, int);

void main()
{
	int k;	double a;

	printf("�p��3.5��k����?�п�JK=");
	scanf_s("%d", &k);
	a = pow(3.5, k);
	printf("3.5��%d����=%f\n", k, a);

	system("pause");
}

double pow(double x, int n)
{
	double pow = 1;
	for (int i = 1; i <= n; i++)
	{
		pow *= x;
	}
	return pow;
}
