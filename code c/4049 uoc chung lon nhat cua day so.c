#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
	return a;
}

int bcnn(int a, int b){
	long kq = ucln(a, b);
	return a * b / kq;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		int a[n], b[n + 1];
		for(i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		printf("%d ", a[1]);
		for(i = 1; i <= n - 1; i++){
			b[i] = bcnn(a[i], a[i + 1]);
			printf("%d ", b[i]);
		}
		printf("%d\n ", a[n]);
	}
}
