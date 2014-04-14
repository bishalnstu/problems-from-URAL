#include<stdio.h>
int main()
{
	int n,i,k=0,fact=1;
	char c;
	
	scanf("%d",&n);
	while(1)
	{
		c=getchar();
		if(c=='\n')
		{
			break;
		}
		if(c=='!')
		k++;
	}
	
	for(i=0;i<=10;i++)
	{
		if((n-i*k)<=0)
		{
		
		break;
	}
		fact*=n-i*k;
	}
printf("%d",fact);
	
return 0;
}
