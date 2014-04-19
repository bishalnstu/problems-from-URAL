#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001][30];
	char b[2][30];
	int n,i,j,count,k,x=0,l=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		
	}
	
	for(j=0;j<n;j++)
	{
		count=0;
		for(k=0;k<n;k++)
		{
			if(strcmp(a[j],a[k])==0)
			{
				count++;
			}
			
		}
		
		if(count>x)
			{
				strcpy(b[l],a[j]);
				
			}
			x=count;
	}
	
	
	    puts(b[l]);
	return 0;
}
