#include<stdio.h>
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	if(sum%2==0)
	printf("black");
	else
	printf("grimy");
	
	return 0;
}
