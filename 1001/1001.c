#include <stdio.h>
#include <math.h>
#include<stdlib.h>
 double b[10000000];
int main()
{
    int i = 0;
    unsigned long long  n;
   

    while (scanf("%llu",&n)!=EOF)
    { 
        b[i++] = sqrt(n);
    }

    while (i--)
        printf("%.4f\n", b[i]);

    return 0;
}
