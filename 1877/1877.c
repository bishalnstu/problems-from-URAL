#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char n[10];
	char m[10];
	int pass1,pass2;
	gets(m);
	gets(n);
	pass1=atoi(m);
	pass2=atoi(n);
	if(pass1%2==0&&pass2%2==0)
	printf("yes");
	else if(pass1%2!=0&&pass2%2!=0)
	printf("yes");
	else if(pass1%2==0&&pass2%2!=0)
	printf("yes");
	else
	printf("no");

	return 0;
	
}
