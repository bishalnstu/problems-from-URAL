#include<stdio.h>
 int flag[105][105];
  int arr[105][105]; 
  int kount; 
  int N;
   int call(int i, int j)
    {
	 if(i > N || j > N) return 0 ;
	  arr[i][j] = kount++;
	   flag[i][j] = 1;
	    call(i + 1, j + 1);
		 return 0;
		  } 
		  int main()
		   {
		   int i, test_cases, cases = 1, j;
		    scanf("%d", &N);
			 kount = 1; 
			 for(i = 1; i <= N; i++)
			  { 
			  for(j = N; j > 0; j--)
			   { 
			   if(flag[i][j] == 0)
			    call(i, j); 
			   }
			    }	
		 for(i = 1; i <= N; i++)
		  { 
		  printf("%d", arr[i][1]); 
		  for(j = 2; j <= N; j++)
		   printf(" %d", arr[i][j]); 
		   puts("");
		    }
			 return 0;
			  }


