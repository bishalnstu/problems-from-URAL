#include<stdio.h>
int main()
{
	int i,j,swap,n,array[103],ans=0,a=0;
    
	scanf("%d",&n);
	
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
	
	for(i=0;i<n;i++)
	{
		ans+=array[i];
	
		
	}
	printf("%d",ans+array[n-1]);

	return 0;
}
