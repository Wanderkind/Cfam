#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d\n",~a+1);
	
	int b = 3;
	int B = b<<3;
	int BB = B>>2;
	printf("%d",BB);
	
	return 0;
}
