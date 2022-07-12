#include <stdio.h>

int main(void)
{
	int n,m;
	int cnt=0;
	scanf("%d", &n);
	here:
		scanf("%d", &m);
		printf("%d\n", m);
		cnt+=1;
		if(cnt<n) goto here;
	return 0;
}
