#include <stdio.h>
 double vote_frq [10005];
int main()
{
    int n, m,i,num,total_voter; 
	scanf ("%d %d", &n, &m);
    
    total_voter=m;
    while ( m-- )
    { 
		scanf ("%d", &num);
        vote_frq[num]++;
        
    }
 
    for ( i = 1; i <= n; i++ )
    {
        printf ("%.2lf%%\n", (vote_frq [i] / total_voter) * 100.0);
    }
     
    return 0;
}
