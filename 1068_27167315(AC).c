#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	if(x>89)
	{
		printf("A");
	}
	else if(x>69)
	{
		printf("B");
	}
	else if(x>39)
	{
		printf("C");
	}
	else
	{
		printf("D");
	}
	return 0;
}
