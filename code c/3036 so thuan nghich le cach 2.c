#include <stdio.h>
#include <math.h>

int tnl(long long n)
{
	int res = 0, m = n, sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		res = res * 10 + n % 10;
		if((n % 10) % 2 == 0) return 0;
		n /= 10;
	}
	if(res == m && sum % 2 != 0) 
		return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(tnl(n))
		{
			printf("YES\n");	
		}else{
			printf("NO\n");
		}
	}
}
