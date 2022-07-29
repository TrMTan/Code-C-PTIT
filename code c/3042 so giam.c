#include <stdio.h>

int kiemtra(int n)
{
	int c = n % 10;
	n/=10;
	while(n > 0)
	{
		if(n % 10 <= c) return 0;
		c = n % 10;
		n/=10;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int count = 0;
		int i;
		for(i = a; i <= b; i++){
			if(kiemtra(i) == 1){
				count++;
			}
		}
		printf("%d\n", count);	
	}
}
