#include<stdio.h>
int main()
{
	int i,j,k,an,bn,cn,f=0,count=0;
	int a[4001],b[4001],c[4001],d[4001];
	scanf("%d",&an);
	for(i=0;i<an;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&bn);
	for(k=0;k<bn;k++)
	{
		scanf("%d",&b[k]);
	}

	scanf("%d\n",&cn);
	for(j=0;j<cn;j++)
	{
		scanf("%d",&c[j]);
	}
	
	for(i=0;i<an;i++)
	{
		for(j=0;j<bn;j++)
		{
			if(a[i]==b[j])
			{
			d[f++]	=a[i];
			}
		}
	}
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<cn;j++)
		{
			if(d[i]==c[j])
			{
			count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
