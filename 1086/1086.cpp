#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool flag[20000005];
int primes[20000000];
int cnt;

void sieve(int n)
{
cnt=0;
primes[cnt++] = 2;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2) 
flag[j] = 1;
}
}
}

return ;
}

int main()
{
	sieve(200000);
	int n,test;
	scanf("%d",&test);
	while(test--)
	{
			scanf("%d",&n);
			printf("%d\n",primes[n-1]);
			
	}
	
	
	return 0;
}
