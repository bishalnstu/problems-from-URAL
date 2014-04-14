#include<stdio.h>
int main()
{
	long int a,b,c,d;
	scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
	
while(a<=c)
	{
		
		a+=b;
		if(a>=c)
		{
		a=c;
		}
		c-=d;
	}
	printf("%ld",a);
	return 0;
}
