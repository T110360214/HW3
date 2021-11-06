#include<stdio.h>
#include<stdlib.h>

int sq(int y);

int main()
{
	int x;
	for (x= 0; x <=10; x++)
	{
		printf("%d ",sq(x));
	}
	printf("\n");
	system("pause");
	return 0;
}

int sq(int y)
{
	return y * y;
}
