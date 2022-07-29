#include<stdio.h>



int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, i, dem = 0;
		scanf("%d", &n);
		int a[n];
		int check[30001] = {0};
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);	
			check[a[i]]++;
			if(check[a[i]] > dem)
			{
				dem = check[a[i]];
			}
		}
		
		for(i = 0; i < n; i++)
		{
			if(check[a[i]] == dem)
			{
				check[a[i]] = 0;
				printf("%d ", a[i]);
			}	
		}
		printf("\n");	
	}
}
