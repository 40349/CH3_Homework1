#include<stdio.h>
#include<stdlib.h>
double power(double x, int y);
int main(void) 
{
	int n;
	printf("3.5ªºn¦¸¤è=?\n");
	printf("n:");
	scanf_s("%d", &n);
	printf("3.5^%d=%.2f", n, power(3.5, n));
	system("pause");
	return 0;
}
double power(double x, int y)
{
	int i;
	double ans = 1;
	for (i = 0; i < y; i++)
	{
		ans = ans * x;
	}
	return ans;
}