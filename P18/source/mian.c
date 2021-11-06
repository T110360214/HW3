#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char st1[60] = "welcome";
	char st2[60];

	int len;

	strcpy_s(st2, strlen(st1)+1, st1);
	printf("st2=%s\n",st2);

	len = strlen(st2);
	printf("¦r¦êªø«×¬°%d\n", len);
	system("pause");
	return 0;
}