#include <stdio.h>
#include <math.h>

int tn(long long n)
{
	int res = 0, m = n;
	while(n > 0)
	{
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(res == m) 
		return 1;
	return 0;
}

int tong(long long n)
{
	int tachso;
	int tong = 0;
	while(n > 0)
	{
		tachso = n % 10;
		tong += tachso;
		n /= 10;
	}
	if(tong % 2 != 0)
		return 1;
	return 0;
}

int sole(long long n)
{
	int check = 1;
	while(n > 0)
	{
		if((n % 10) % 2 == 0)
		{
			check = 0;
			break;
		}else{
			n/=10;
		}
	}
	if(check == 1)
		return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(tn(n) == 1 && sole(n) == 1 && tong(n))
		{
			printf("YES\n");	
		}else{
			printf("NO\n");
		}
	}
}

