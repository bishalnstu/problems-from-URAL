#include<stdio.h>
int main ()

{
    int k, n,i;
    int pure_nums, defaulter_num;

    while ( scanf ("%d %d", &n, &k) != EOF ) {
        pure_nums = (k - 1) * (k - 1);
        defaulter_num = k - 1;

        for ( i = 3; i <= n; i++ ) {
            int tmp = pure_nums;
            pure_nums = pure_nums * (k - 1) + defaulter_num * (k - 1);
            defaulter_num = tmp;
        }

        printf ("%d\n", pure_nums + defaulter_num);
    }

	return 0;
}
