 #include<stdio.h>
 #include<string.h>
    int a[100000];
    int main()
    {
            int n,i,j,k,ans1=0,ans2=0;
            int unused,survived;
           
            scanf("%d %d\n",&n,&k);
           
            for(i=0;i<n;i++)
            {
                    scanf("%d",&a[i]);
                   
                   
            }
           
            for(j=0;j<n;j++)
            {
                    unused=a[j]-k;
                   survived=k-a[j];
                   
                    if(unused>=0)
                    {
                            ans1+=unused;
                    }
                     
                             if(survived>=0)
                    {
                            ans2+=survived;
                           
                    }
                   
            }
            
            printf("%d %d",ans1,ans2);
           
            return 0;
    }


