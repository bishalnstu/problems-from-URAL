#include<stdio.h>
#include<math.h>
 unsigned long a[70000];
int main()
{
	unsigned long i,k,n;
	long double x;
	scanf("%ul",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ul",&a[i]);
		
		
	}
	for(i=0;i<n;i++)
	{
		x=(-1 + sqrt(-7+8*a[i]))/ 2;
		k=x;
		if(x==k)
		printf("1 ");
		else
		printf("0 ");
	}
	return 0;
}
