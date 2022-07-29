#include <stdio.h>

int tong(int n){
	int sum = 0;
	int tachso;
	while(n > 0){
		tachso = n % 10;
		sum += tachso;
		n /= 10;
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(tong(b) < tong(a)) printf("%d %d", b, a);
	else printf("%d %d", a, b);
}
