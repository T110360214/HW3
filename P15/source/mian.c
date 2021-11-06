#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>

int maxi(int, int,int);

int main()
{
	int n1,n2,n3;

	printf("enter 3 integers:");
	scanf_s("%d %d %d", &n1,&n2,&n3);
	printf("maximum is: %d\n", maxi(n1,n2,n3));

	system("pause");
	return 0;
}

int maxi(int x, int y, int z)
{
	int m = x;
	if (m < y)
		m = y;
	if (m < z)
		m = z;
	return m;
}
