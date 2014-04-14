#include<stdio.h>
int main()
{
	int i,j,k;
	scanf("%d %d",&i,&j);
	
	int count=0;
	for(k=i;k<=j;k+=2)
	{
		count++;
	}
	if(i%2==0&&j%2==0)
	printf("%d",count-1);
	else
	printf("%d",count);
	return 0;
}
