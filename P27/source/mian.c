#include<stdio.h>
#include<stdlib.h>

long f(long n);
int main()
{
	for (int i = 0; i < 11; i++)
	{
		printf("%2d! = %1d\n", i,f(i));
	}
	system("pause");
	return 0;
}

long f(long n)
{
	if (n <= 1)
		return 1;
	else
		return(n*f(n - 1));
}