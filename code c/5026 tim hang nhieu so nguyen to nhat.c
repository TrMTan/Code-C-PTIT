#include<stdio.h>
#include<math.h>

int snt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, i, j;
	scanf("%d", &n);
	int a[30][30];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int hang, max = 0;
	for(i = 0; i < n; i++)
	{
		int dem = 0; // dem xem hang i co bn so nt
		for(j = 0; j < n; j++)
		{
			if(snt(a[i][j])){
				dem++;
			}
		}
		if(dem > max)
		{
			max = dem;
			hang = i;
		} 
	}
	printf("%d\n", hang + 1);
	for(i = 0; i < n; i++)
	{
		if(snt(a[hang][i]))
		{
			printf("%d ", a[hang][i]);	
		} 
	}
}
