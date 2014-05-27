#include<stdio.h>
int main()
{
	int n;
	double sum;
	scanf("%d",&n);
	int i,p;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		sum+=(double)p;
		
	}
	sum/= (double)n;
	printf("%0.6lf",sum);
	return 0;
}
