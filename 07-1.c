#include <stdio.h>

int main(void)
{
	
	int a;
	int cnt = 0;
	scanf("%d",&a);
	while (cnt<a)
	{
		printf("Hello world!\n");
		cnt++;
	}
	
	int b;
	int cnt1 = 1;
	scanf("%d",&b);
	while (cnt1<=b)
	{
		printf("%d ",3*cnt1);
		cnt1++;
	}
	
	int c;
	int C=0;
	printf("\n");
	scanf("%d",&c);
	while (c!=0)
	{
		C+=c;
		scanf("%d",&c);
	}
	printf("%d\n",C);
	
	
	int k=0, num=9;
	scanf("%d",&k);
	while (num>0) 
	{
		printf("%d ¡¿ %d = %d\n",k,num,k*num);
		num--;
	}
	
	
	int n;
	double t;
	scanf("%d",&n);
	int w=0;
	double s=0;
	while (w<n)
	{
		scanf("%lf",&t);
		s+=t;
		w++;
	}
	printf("%lf",s/n);
	return 0;
}
