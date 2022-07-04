#include <stdio.h>
#include <math.h>

int main(void)
{
	
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",a-b);
    printf("%d\n\n",a*b);
    
    int c,d,e;
    scanf("%d %d %d",&c,&d,&e);
    printf("%d¡¿%d+%d=%d\n\n",c,d,e,c*d+e);
    
    int f;
    scanf("%d",&f);
    printf("%d\n\n",f*f);
    
    int g,h;
    scanf("%d",&g);
    scanf("%d",&h);
    printf("%d\n",g/h);
    printf("%d\n\n",g%h);
    
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    printf("%d",(i-j)*(j+k)*(k%i));
    
	return 0;
}
