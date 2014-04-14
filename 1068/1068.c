#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,sum=0;
	scanf("%d",&n);
	m=abs(n);
	for(i=1;i<=m;i++)
	{
		sum+=i;
	}
	if(n>0)
	printf("%d\n",sum);
	else if(n==0)
	printf("%d\n",sum+1);
	else
	printf("-%d\n",sum-1);
	return 0;
}
