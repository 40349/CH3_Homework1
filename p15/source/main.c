#include<stdio.h>
#include<stdlib.h>
int  maximum(int x, int y, int z);
int main(void)
{
	int n1, n2, n3;
	printf("input 3 intergers:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("max:%d\n", maximum(n1, n2, n3));
	system("pause");
	return 0;
}
int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}