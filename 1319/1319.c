#include<stdio.h>
#include<math.h>
#include<iostream>
#include<set>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<iterator>
#include<sstream>
#include<stack>
#include<queue>
#include<limits.h>
#define fi(a, b) for(int i=a; i<b; i++)
#define fj(a, b) for(int j=a; j<b; j++)
#define fk(a, b) for(int k=a; k<b; k++)
#define SZ(x) (int)x.size()
#define pp() pop_back()
#define pb(x) push_back(x)
#define mp make_pair
#define sf scanf
#define pf printf
#define ssf sscanf
#define rsrt(x) sort(x.rbegin(), x.rend())
#define srt(x) sort(x.begin(), x.end())
#define mem(name, value) memset(name, value, sizeof(name))
#define Max 1000
#define oo 1000000000
//#include<conio.h>
//#define WT getch()
 
 
using namespace std;
 
typedef pair<int, int>ii;
map<string, int>stin;
map<char, int>chin;
map<int, int>inin;
map<string, string>stst;
map<vector<string>, int>vsin;
typedef vector<int>vi;
typedef vector<string>vs;
typedef vector<char>vc;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef char C;
typedef string S;
#define fr first
#define sc second
//int dx[4] = {+0,-1,+0,+1}, dy[4] = {-1,+0,+1,+0}; /*row and column moves*/
//int dx[8] = {-1,-1,-1,+0,+1,+1,+1,+0}, dy[8] = {-1,0,+1,+1,+1,0,-1,-1};/*8-direction*/
/**
knight moves:
dx[8] = {-1,-2,-2,-1,+1,+2,+2,+1};
dy[8] = {-2,-1,+1,+2,+2,+1,-1,-2};
*/
 
struct type
{
type() {}
};
 
typedef vector<type> vt;
typedef vector<ii> vii;
 
bool flag[101][101];
int arr[101][101];
 
 
int kount;
int N;
 
void call(int i, int j)
{
if(i > N || j > N) return ;
arr[i][j] = kount++;
flag[i][j] = true;
call(i + 1, j + 1);
return ;
}
 
int main()
{
int test_cases, cases = 1;
sf("%d", &N);
 
kount = 1;
for(int i = 1; i <= N; i++)
{
for(int j = N; j > 0; j--)
{
if(flag[i][j] == false)
call(i, j);
}
}
for(int i = 1; i <= N; i++)
{
pf("%d", arr[i][1]);
for(int j=2; j <= N; j++)
pf(" %d", arr[i][j]);
puts("");
}
 
return 0;
}

