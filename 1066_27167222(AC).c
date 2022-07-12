#include <stdio.h>

int main(void)
{
	int x,y,z,w;
	scanf("%d %d %d",&x,&y,&z);
	int a[3]={x,y,z};
	int i=0;
	for (;i<3;i++)
	{
		w=a[i];
		if(w%2==0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}
	return 0;
}
