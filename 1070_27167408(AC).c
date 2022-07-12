#include <stdio.h>

int main(void)
{
	int X;
	scanf("%d",&X);
	int x=X%12;
	if(x<3)
	{
		printf("winter");
	}
	else if(x<6)
	{
		printf("spring");
	}
	else if(x<9)
	{
		printf("summer");
	}
	else
	{
		printf("fall");
	}
	return 0;
}
