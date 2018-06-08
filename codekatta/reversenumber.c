#include <stdio.h>

int main(void) {
	int n=0,a,b;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		n=n*10+b;
		a=a/10;
		printf("%d",n);
	}
	return 0;
}
