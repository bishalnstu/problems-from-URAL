# include<string.h>
#include<stdio.h>

char a[1005][35];
    char b[1005][35];
int main()
{
    
    int n,i,j,count,h,m=0,ans=0;
    scanf("%d\n",&n);
        
        for(i=0;i<n;i++)
	{
		gets(a[i]);
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
                 ans+=count-1;
                	strcpy(b[m++],a[i]);
                }
                    
            }
        }

    printf("%d",ans);
    return 0;
}
    
