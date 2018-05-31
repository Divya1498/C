#include <stdio.h>
#include<string.h>
int main(void) {
	char a[50];
	int c=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
{
	if(a[i]>=97 && a[i]<=123)
	c++;
}
printf("%d",c);
	return 0;
}
