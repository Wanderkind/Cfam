#include <stdio.h>

int max(int x,int y,int z){
	return (x>y?x:y)>z?(x>y?x:y):z;
}

int min(int x,int y,int z){
	return (x<y?x:y)<z?(x<y?x:y):z;
}

int ctf(double x){
	return 9*x/5+32;
}

int ftc(double x){
	return 5*(x-32)/9;
}

void fib(int n){
	int i,a=1,b=0,c;
	for (i=0;i<n;i++){
		printf("%d ",b);
		c=b;b=a+b;a=c; 
	}
}

int main(void){
	int n;
	while (1){
		scanf("%d",&n);
		
		if (n==1){
			int x,y,z;
			scanf("%d %d %d",&x,&y,&z);
			printf("%d\n",max(x,y,z));
			printf("%d\n",min(x,y,z));
		}
		
		else if (n==2){
			double x;
			scanf("%lf",&x);
			printf("%f\n",(double)ctf(x));
			printf("%f\n",(double)ftc(x));
		}
		
		else{
			int n;
			scanf("%d",&n);
			fib(n);
		}
		printf("\n");
	}
	return 0;
}
