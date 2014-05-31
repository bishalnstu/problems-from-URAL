#include<stdio.h>
int main()
{
unsigned int m,n,ans;

	scanf("%u %u",&m,&n);
	if(m>n)
	{
		ans=n*2-1;
		printf("%u",ans);
	}
	
	else{
			 ans=(m-1)*2;
	printf("%u",ans);
	}

	return 0;
}
