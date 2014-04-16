#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char bishal[110][10];
int main()
{
	char key;
	
	int n,i,j,k=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s\n",bishal[i]);
	}
	
	scanf("%c",&key);
	
	for(j=0;j<n;j++)
	{
		
		if(bishal[j][k]==key)
		
			printf("%s\n",bishal[j]);
		
		
	}
	return 0;
}
