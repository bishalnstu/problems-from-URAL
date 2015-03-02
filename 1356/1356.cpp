#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int cnt;
int N,primes[10000]; 
int status[100009/32+10];

bool Check(int N,int pos)
{
return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
	return N=N | (1<<pos);
}

bool isPrime(int prime)
	{
	    for (int i = 3; i <=sqrt(prime); i+=2)
	    {
	         
	        if (prime % i == 0)
	        {
	            return true;	   
		    }  
	    }
		return false;	     
	}
void sieve(int N)
{
     int  i, j;
	 int sqrtN; 
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 ) 
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j>>5]=Set(status[j>>5],j&31);
	 		 }
		 }
	 }
	 cnt=0;
	 primes[cnt++]=2;
	 for(i=3;i<=N;i+=2)
		 if( Check(status[i>>5],i&31)==0)
	 	 {
	 	 	primes[cnt++]=i;
	 	 }
	 	
}

int main()
{
	
	sieve(100009);

	int n,temp,ans1,count,p0,p1,p2,test,j,mark,sign,i;
	bool k;
	scanf("%d",&test);
   while(test--)
   {
   	mark=0,sign=0;
   	scanf("%d",&n);
   	if(n==2)
   	printf("%d\n",n);
   	else if(isPrime(n)==0 and n%2!=0)
   	printf("%d\n",n);
   	else
   	{
   		
   	if(n%2!=0)
   	{
   		mark=1;
   		p0=2;
   		n=n-2;
   		if(isPrime(n)==0)
   		{
   			sign=1;
   			printf("%d %d\n",p0,n);
   		}
   		n--;
   		p0=3;
   	}
   	if(sign!=1)
   	{
   	    for(int i=0;i<cnt;i++)
   	    {
   	    	temp=n-primes[i];
   	    	if(temp%2==0)
   	    	k=true;
   	    	else
   	    	k=isPrime(temp);
   	    	
   	    	if(primes[i]+temp==n and k==false)
   	    	{
   	    		p1=primes[i];
   	    		p2=temp;
   	    		break;
   	    	}
   	    }
		   if(mark==1 and sign !=1)
		   printf("%d %d %d\n",p0,p1,p2);
		   else
		   printf("%d %d\n",p1,p2);	
   	}
   		
		   	
   	}
    
}
return 0;
}
