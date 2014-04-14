#include<stdio.h>
int array[100][100];
int main()
{
    int n,i,j,c,r;
    scanf("%d",&n);
    
    
    
    for(i = 0;i<n;i++)
        for(j = 0;j<n;j++)
            scanf("%d",&array[i][j]);
    
    for(i = 0;i<(2*n-1);i++){
        for(c = 0;c<=i&&c<n;c++){
            r = i-c;
            if(r>=0&&r<n) 
			printf("%d ",array[r][c]);
        }
    }
    
    return 0;
}
