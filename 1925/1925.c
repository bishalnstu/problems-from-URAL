#include<stdio.h>
int main()
{
	int n,k,i,sum=0,j,test=0;
	int a[105],b[105];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		
	}
	for(j=0;j<n;j++)
	{
		sum+=a[j];
		test+=b[j];
	}
	sum+=k;
	sum-=(n+1)*2;
	int ans=sum-test;
	if(ans>=0)
	printf("%d",ans);
	else
	printf("Big Bang!");
	
	return 0;
	
}
