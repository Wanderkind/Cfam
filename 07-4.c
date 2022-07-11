#include <stdio.h>

int main(void)
{
	
	int a,b;
	int s=0;
	scanf("%d %d",&a,&b);
	for (;a<=b;a++)
	{
		s+=a;
	}
	printf("%d\n",s);
	
	int n;
	int m=1;
	scanf("%d",&n);
	int i=1;
	//for (int i=1;i<=n;i++)
	for (;i<=n;i++)
	{
		m*=i;
	}
	printf("%d",m);
	return 0;
}
