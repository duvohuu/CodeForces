#include <stdio.h>

int main(){
    int t;
	scanf("%d", &t);
    while(t--)
	{
    	long long n, count=0, start;
    	scanf("%lld", &n);
    	for (int i = 1; i <= 9; i++)
    	{
    		start = i;
    		while (start <= n)
    		{
    			count++;
    			start = start * 10 + i;
			}
		}
		printf("%lld\n", count);
    }
	return 0;
}