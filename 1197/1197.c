#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[101][5];
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
int b=1;
for(j=0;j<n;j++)
{
	if(a[j][k]=='a')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("2\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("3\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("4\n");
}
}
else if(a[j][k]=='b')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("3\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("4\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("6\n");
}
}

else if(a[j][k]=='c')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("4\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("6\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("8\n");
}
}

else if(a[j][k]=='d')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("4\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("6\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("8\n");
}
}

else if(a[j][k]=='e')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("4\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("6\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("8\n");
}
}

	else if(a[j][k]=='f')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("4\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("6\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("8\n");
}
}

else if(a[j][k]=='g')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("3\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("4\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("6\n");
}
}
else if(a[j][k]=='h')
{
	if(a[j][b]=='1'||a[j][b]=='8')
{
	printf("2\n");
}
else if(a[j][b]=='2'||a[j][b]=='7')
{
	printf("3\n");
}
else if(a[j][b]=='3'||a[j][b]=='4'||a[j][b]=='5'||a[j][b]=='6')
{
	printf("4\n");
}
}	
}
	return 0;
}
