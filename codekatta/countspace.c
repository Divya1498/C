#include<stdio.h>
#include<string.h>
int main(void){
	char a[50];
	int c=0,i,d;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	
{	if(a[0]==' ')  
	{printf("%d",c); 
	goto exit;}
	else {if(a[i]=='32')
	c++;
}}
d=c+1;
printf("%d",d);
exit:
	return 0;
}
