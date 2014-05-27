#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int ans1=2*a+39;
	int ans2=2*b+40;
	if(ans1>ans2)
	printf("%d",ans1);
	else
		printf("%d",ans2);
	return 0;
}
