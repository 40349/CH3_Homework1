#include<stdio.h>
#include<stdlib.h>
int square(int y);
int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", square(i));
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int y)
{
	return y * y;
}