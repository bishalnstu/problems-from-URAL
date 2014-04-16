#include<stdio.h>
#include<math.h>
#include<string.h>
#define fi(a, b) for(int i=a; i<b; i++)
#define fj(a, b) for(int j=a; j<b; j++)
#define fk(a, b) for(int k=a; k<b; k++)
 
#define sf scanf
#define pf printf
#define ssf sscanf
#define mem(name, value) memset(name, value, sizeof(name))
#define Max 1000
#define oo 1000000000


typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef char C;
 int dp[1001];
int X, Y, M;
 
int rec(int N)
{
if(N <= 1) return X % M;
if(dp[N] != -1) return dp[N];
return dp[N] = (rec(N / 2) % M * rec(N - N / 2) % M) % M;
}
 
int main()
{
int test_cases, cases = 1;
int N;
sf("%d %d %d", &N, &M, &Y);
int arr[1005], kount = 0;
mem(arr, -1);
int i = 0;
for(i = 0; i < M; i++)
{
mem(dp, -1);
X = i;
if(rec(N) == Y)
arr[kount++] = i;
}
if(kount == 0)
{
pf("-1\n");
return 0;
}
pf("%d", arr[0]);
for(i = 1; i < kount; i++)
pf(" %d", arr[i]);
puts("");
return 0;
}
