#include<stdio.h> 
#include<string.h>
int main() 
{
 int test_cases;
  char str[100];
   scanf("%s", str);
   int mod = 0, len = strlen(str), i;
   	for(i = 0; i < len; i++) 
	 {
     mod = (mod + (str[i] - '0')) % 7;
     mod *= 10;
	} 
	printf("%d\n", mod / 10);
    return 0;
 }
