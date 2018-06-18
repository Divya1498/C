#include <stdio.h>

int main(void) {
	int i,k,len,n[7];
	char r[7];
	scanf("%s",&r);
	len=strlen(r);
	for(i=0;i<len;i++)
	{
		if(r[i]=='I')
		r[i]=1;
		else if(r[i]=='V')
		r[i]=5;
		else if(r[i]=='X')
		r[i]=10;
		else if(r[i]=='L')
		r[i]=50;
		else if(r[i]=='C')
		r[i]=100;
		else if(r[i]=='D')
		r[i]=500;
		else if(r[i]=='M')
		r[i]=1000;
	}
	k=len[n-1];
	for(i=len-1;i>0;i--)
	{
		if(n[i]>n[i-1])
		k=k-n[i-1];
		else
		k=k+n[i-1];
	}
	printf("%d",k);
	return 0;
}
