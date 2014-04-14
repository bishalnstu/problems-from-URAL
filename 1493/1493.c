#include<stdio.h>
int main()
{
	int n,n1,n2,a,b,c,d,e,f,g,h,i,j,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,sum_last,sum_first,sum_last1,sum_first1;
	scanf("%d",&n);
	n1=n+1;
	n2=n-1;
	a=n1%10;
	b=n1/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	g=f%10;
	h=f/10;
	i=h%10;
	j=h/10;
	a1=n2%10;
	b1=n2/10;
	c1=b1%10;
	d1=b1/10;
	e1=d1%10;
	f1=d1/10;
	g1=f1%10;
	h1=f1/10;
	i1=h1%10;
	j1=h1/10;
	sum_last=a+c+e;
	sum_first=g+i+j;
	sum_last1=a1+c1+e1;
	sum_first1=g1+i1+j1;
	
   if(sum_last==sum_first||sum_last1==sum_first1)
   printf("Yes");
   else
   printf("No");
	return 0;
	
}
