#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum Status { CONTINUE, WON, LOST };
int rolldice(void);
int main(void)
{
	int sum, point;
	enum Status gamestatus;
	srand(time(NULL));
	sum = rolldice();
	switch (sum)
	{
		case 7:
		case 11:
			gamestatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			gamestatus = LOST;
			break;
		default:
			gamestatus = CONTINUE;
			point = sum;
			printf("point is %d\n", point);
			break;
	}
	while (gamestatus == CONTINUE)
	{
		sum = rolldice();
		if (sum == point)
		{
			gamestatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gamestatus = LOST;
			}
		}
	}
	if (gamestatus == WON)
	{
		printf("player wins\n");
	}
	else
	{
		printf("player loses\n");
	}
	system("pause");
	return 0;
}
int rolldice(void)
{
	int die1, die2, worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}
