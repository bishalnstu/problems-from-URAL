# include<string.h>
#include<stdio.h>
int main()
{
    char a[105][35];
    char b[105][35];
    int n,i,j,count,h,m=0;
    scanf("%d",&n);
        
        for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	
        for (i=0;i<n;i++)
        {
            count=0;
            for (j=0;j<n;j++)
            {
                if (strcmp(a[i],a[j])==0)
                    count++;
            }
            if (count>=2)
            {
               h=0;
                for(j=0;j<i;j++)
                {
                    if(strcmp(a[i],a[j])!=0)
                        h++;
                }
                if (h==i)
                {
                	strcpy(b[m++],a[i]);
                }
                    
            }
        }
        for(i=0;i<m;i++)
	{
		printf("%s\n",b[i]);
	}
    
    return 0;
}
