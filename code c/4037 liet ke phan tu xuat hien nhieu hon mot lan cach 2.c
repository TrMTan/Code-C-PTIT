#include<stdio.h>

int check[1000001] = {0};

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], dem = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		check[a[i]]++;
	}
	int b[100];
	for(int i = 0; i < n; i++){
		if(check[a[i]] > 1){
			b[dem++] = a[i];
			check[a[i]] = 0;
		}
	}
	printf("%d\n", dem);
	for(int i = 0; i < dem; i++){
		printf("%d ", b[i]);
	}
}
