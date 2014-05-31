#include<stdio.h>
#include<stdlib.h>
int a[25000],b[25000],c[25000];

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int i,j,k=1,k1=1,count,count1,p=0,p1=0;
	
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	 qsort(a, n, sizeof(int), cmpfunc);
	 while(i--)
	 {
	 	printf("%d\n",a[i]);
	 }
	 
	 return 0;
}
