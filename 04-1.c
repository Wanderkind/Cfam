#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("8 1000 %x\n",8);
	printf("9 1001 %x\n",9);
	printf("10 1010 %x\n",10);
	printf("11 1011 %x\n",11);
	printf("12 1100 %x\n",12);
	printf("13 1101 %x\n",13);
	printf("14 1110 %x\n",14);
	printf("15 1111 %x\n",15);
	printf("16 10000 %x\n",16);
	printf("17 10001 %x\n",17);
	printf("18 10010 %x\n",18);
	printf("19 10011 %x\n",19);
	printf("20 10100 %x\n\n",20);
	
	int i;
	for (i=5;i<19;i++)
		printf("%d %o\n",i,i);

	return 0;
}
