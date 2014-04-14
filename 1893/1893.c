#include<stdio.h>
int main()
{
	int n;
	int k;char ch;
	scanf("%d%c",&k,&ch);

	if(k>=1&&k<=2)
	{
		if(ch=='A'||ch=='D')
		printf("window");
		else
		printf("aisle");
	}
	else if(k>=3&&k<=20)
	{
		if(ch=='A'||ch=='F')
		printf("window");
		else
		printf("aisle");
	}
	else if(k>=21&&k<=65)
	{
		if(ch=='A'||ch=='K')
		{
		printf("window");
		}
		
		else if(ch=='C'||ch=='D'||ch=='G'||ch=='H')
		{
			printf("aisle");
		}
		
		else if(ch=='B'||ch=='E'||ch=='F'||ch=='J')
		{
			printf("neither");
		}
		
	}
	return 0;
}
