#include <stdio.h>
#include<string.h>

long long tongmin(char a[], char b[])
{
	long long tong1 = 0, tong2 = 0;
	int i;
	for(i = 0; i < strlen(a); i++)
	{
		int x = a[i] - '0';
		if(x == 6){
			x = 5;
		}
		tong1 = tong1 * 10 + x;
	}
	for(i = 0; i < strlen(b); i++)
	{
		int x = b[i] - '0';
		if(x == 6){
			x = 5;
		}
		tong2 = tong2 * 10 + x;
	}
	return tong1 + tong2;
}

long long tongmax(char a[], char b[])
{
	long long tong1 = 0, tong2 = 0;
	int i;
	for(i = 0; i < strlen(a); i++)
	{
		int x = a[i] - '0';
		if(x == 5){
			x = 6;
		}
		tong1 = tong1 * 10 + x;
	}
	for(i = 0; i < strlen(b); i++)
	{
		int x = b[i] - '0';
		if(x == 5){
			x = 6;
		}
		tong2 = tong2 * 10 + x;
	}
	return tong1 + tong2;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100], b[100];
		scanf("%s %s", a, b);
		printf("%lld %lld\n", tongmin(a, b), tongmax(a, b));
	}
}
