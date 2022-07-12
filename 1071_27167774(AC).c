#include <stdio.h>

int main(void)
{
	int i;
	while (1)
	{
		scanf("%d",&i);
		if (i!=0)
		{
			printf("%d\n",i);
		}
		else
		{
			break;
		}
	}
	return 0;
}
