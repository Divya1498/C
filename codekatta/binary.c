#include<stdio.h>
#include<string.h>
int main(void){
	int a[50],n,c=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0||a[i]==1)
		{
		c++;	
		}
	
	}
	if(c==(n-1))
	printf("\n yes");
	else
	printf("\n no");
	
	return 0;
}
