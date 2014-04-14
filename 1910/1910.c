#include<stdio.h>
int main()
{
	int n,i,j;long int k=0,sum;
	int s=0;
	scanf("%d",&n);
	long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n-2;i++)
	{
		sum=0;
		for(j=i;j<i+3;j++)
		{
			sum+=a[j];
			
		}
		if(sum>=k)
			{
				k=sum;
		       s=i+1;
			}	 	
	}
	printf("%ld %d",k,s+1);
	
	return 0;
}
