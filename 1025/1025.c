#include<stdio.h>
int main()
{
	int i,j,k,a,swap,n,sum=0,array[101];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&array[i]);
	
}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
			
			swap=array[j];
			array[j]=array[j+1];
			array[j+1]=swap;
		}
		}
	}
	k=i/2+1;
	for(a=0;a<k;a++)
	{
	sum+=array[a]/2+1;
	}
	printf("\n%d",sum);
	return 0;
}


