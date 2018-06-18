#include<stdio.h>
#include<string.h>
int main(void){
	char a[20],len,i;
	printf("enter the string");
	scanf("%s",&a);
	len=strlen(a);
	for(i=len-1;i>=0;i++)
	{
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='O'&&a[i]!='I'&&a[i]!='U')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
