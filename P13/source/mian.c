#include<stdio.h>
#include<stdlib.h>

double pow(double, int);

void main()
{
	int k;	double a;

	printf("計算3.5的k次方?請輸入K=");
	scanf_s("%d", &k);
	a = pow(3.5, k);
	printf("3.5的%d次方=%f\n", k, a);

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
