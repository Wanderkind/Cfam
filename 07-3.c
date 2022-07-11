#include <stdio.h>

int main(void)
{
	
	int s=0,t=0;
	do
	{
		t+=2;
		s+=t;
	}while(t<100);
	printf("%d",s);
	
	return 0;
}
