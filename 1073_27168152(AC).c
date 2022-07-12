#include <stdio.h>

int main(void)
{
	int m;
	here:
		scanf("%d", &m);
		if(m!=0){
			printf("%d\n", m);
			goto here;
		}
	return 0;
}
