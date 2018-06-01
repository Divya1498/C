#include <stdio.h>
#include<string.h>

int main(void) {
	int a[50],min,max,i;
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	max=a[0];min=a[0];
	for(i=0;i<3;i++)
{
	if(a[i]>max)
	max=a[i];
	if(a[i]<min)
	min=a[i];
}
printf("%d",min);
printf("%d",max);
	return 0;
}
