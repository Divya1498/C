#include <stdio.h>
#include<string.h>

int main(void) {
	char a[50];
	int n,i,c=0;
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			c++;
	
		}
		else
		{
			continue;
		}
	}
	
	if(c!=0)
	printf("\n yes");
	else
	
	printf("\n no");

	return 0;
}
