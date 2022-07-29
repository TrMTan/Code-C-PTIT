#include<stdio.h>
#include<math.h>

long long test(int n){
	int p = 0;
	long long nhiphan = 0;
	if(n > 0){
		nhiphan += (n % 2) * pow(10, p);
		++p;
		n /= 2;
	}
	return nhiphan;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("Bin = %d", test(n));
}
