#include<bits/stdc++.h>
bool flag[2000];
int List[10001]={0},primes[100]; 
int listSize,cnt;   
bool mark[10001]={false};
using namespace std;
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

void primeFactorize( int n )
 {
       
    for( int i = 0;i<cnt and primes[i]<=sqrt(n);i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
                List[primes[i]]++; 
                
            }
           mark[primes[i]]=true; 
        }
    }
    
    if( n > 1 ) 
	{
        
        List[n]++; 
       mark[n]=true;
    }
    
    return ;
}
int main() 
{
	int n;
	long long ans;
	sieve(110);
	
		ans=1;
    for( int i = 1;i<=10;i++) 
    {
    	scanf("%d",&n);
        primeFactorize(n);
    }
       for(int i=1;i<=10000;i++)
	   {
	   	if(mark[i]==true)
	   	{
	   		ans*=(List[i]+1);
	   	}
	   } 
	   printf("%lld",ans%10);
    return 0;
}

