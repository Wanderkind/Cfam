#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	if(x>0)
	{
		printf("plus");
	}
	else
	{
		printf("minus");
	}
	printf("\n");
	if(x%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
