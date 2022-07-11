#include <stdio.h>

int main(void)
{
	
	int s=0,t=0,cnt=0;
	while (cnt<5)
	{
		while (t==0)
		{
			scanf("%d",&t);
		}
		s+=t;
		t=0;
		cnt++;
	}
	printf("%d\n\n",s);
	
	int c=1,q=1;
	while (c<6)
	{
		q=1;
		while (q<c)
		{
			printf("o ");
			q+=1;
		}
		printf("*\n");
		c+=1;
	}
	
	return 0;
}
