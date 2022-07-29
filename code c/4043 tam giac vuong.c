#include<stdio.h>

int check(int b[], int n){
	long long a[n];
	int i;
	for(i = 0; i < n; i++){
		a[i] = (long long)b[i] * b[i];
	}
	for(i = n - 1; i > 0; i--){
		int l = 0, r = n - 1;
		while(l < r){
			if(a[l] + a[r] == a[i]) return 1; // tim dc bo ba canh tg
			else if(a[l] + a[r] < a[i]) ++l; //tong 2 so nho hon thi tang bien l
			else --r;						// tong 2 so lon hon thi giam bien r
		}
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, j;
		scanf("%d", &n);
		int a[n];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(i = 0; i < n - 1; i++){
			for(j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		if(check(a, n) == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
