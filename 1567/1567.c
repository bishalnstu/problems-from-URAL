#include<stdio.h>
int main()
{
	char ch;
	int sum=0;
	while(scanf("%c",&ch)==1)
	{
		if(ch=='a')
		sum+=1;
		else if(ch=='b')
		sum+=2;
		else if(ch=='c')
		sum+=3;
		else if(ch=='d')
		sum+=1;
		else if(ch=='e')
		sum+=2;
		else if(ch=='f')
		sum+=3;
		else if(ch=='g')
		sum+=1;
		else if(ch=='h')
		sum+=2;
		else if(ch=='i')
		sum+=3;
		else if(ch=='j')
		sum+=1;
		else if(ch=='k')
		sum+=2;
		else if(ch=='l')
		sum+=3;
		else if(ch=='m')
		sum+=1;
		else if(ch=='n')
		sum+=2;
		else if(ch=='o')
		sum+=3;
		else if(ch=='p')
		sum+=1;
		else if(ch=='q')
		sum+=2;
		else if(ch=='r')
		sum+=3;
		else if(ch=='s')
		sum+=1;
		else if(ch=='t')
		sum+=2;
		else if(ch=='u')
		sum+=3;
		else if(ch=='v')
		sum+=1;
		else if(ch=='w')
		sum+=2;
		else if(ch=='x')
		sum+=3;
		else if(ch=='y')
		sum+=1;
		else if(ch=='z')
		sum+=2;
		else if(ch=='.')
		sum+=1;
		else if(ch==',')
		sum+=2;
		else if(ch=='!')
		sum+=3;
		else if(ch==' ')
		sum+=1;
	}
	printf("%d",sum);
	return 0;
}
