#include<stdio.h>

int main()
 {
 int n, x[22], sum, ans, possible_comb, i;

 scanf("%d",&n);
  for(i=0; i<n; i++)
scanf("%d", &x[i]);
possible_comb = (1<<n);
 sum = 0;
 while(possible_comb)
 {
	 for(i=0; i<n; i++)
	 if(possible_comb & (1<<i))
        sum+=x[i];
	 else
	 sum-=x[i];
	 if(sum>=0 && ans>sum)
	ans = sum;
	sum = 0;
	possible_comb--;
 }
 printf("%d\n", ans);

    	 return 0;

 }
