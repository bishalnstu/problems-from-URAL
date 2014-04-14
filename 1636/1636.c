#include<stdio.h>
int main()
{
	int t1,t2,i,j,temp,sum=0;
	int a[12];
	scanf("%d %d",&t1,&t2);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(j=0;j<10;j++)
	{
		sum+=a[j];
	}
	sum*=20;
	t2-=sum;
   if(t2>=t1)
	printf("No chance.");
	else if(t2<t1)
	printf("Dirty debug :(");
	return 0;
}
