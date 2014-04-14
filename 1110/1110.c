#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,y,x,count=0;
	long long int power;
	scanf("%d %d %d",&n,&m,&y);
for(x=0;x<m;x++)
{
	power=pow(x,n);
	if(power%m==y)
	{
		printf("%d ",x);
		count++;
	}
	
}
if(count==0)
printf("-1");
return 0;
}
