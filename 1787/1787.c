#include<stdio.h>
#include<math.h>
int a[101];
int main()
{
	int k,n,i,jaam=0;
	scanf("%d %d",&k,&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		jaam+=a[i]-k;
	    jaam=jaam<0?0:jaam;
	}
	
	printf("%d",jaam);

return 0;
}
