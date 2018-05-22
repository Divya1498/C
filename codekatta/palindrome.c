#include <stdio.h>
#include<math.h>


int main(void) {
	// your code goes h
	
int a;
scanf("%d",&a);
int t=a,y,sum=0;
if(t<=1000)
{
while(t>0)
{
	y=t%10;
	sum=(sum*10)+y;
	t/=10;
}
}
if(sum==a)
printf("\n yes");
else
printf("\n no");

return 0;
}
