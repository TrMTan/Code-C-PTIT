#include<stdio.h>
#include<math.h>

int count[100001] = {0};

int snt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;		
		}
	}
	return 1;
}

void check(int t){
	int n, i, max = 0;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(max < a[i]){
			max = a[i];
		}
		if(snt(a[i]) == 1){
			count[a[i]]++;
		}
	}
	printf("Test %d:\n", t);
	for(i = 0; i <= max; i++){
		if(count[i] > 0){
			printf("%d xuat hien %d lan\n", i, count[i]);
			count[i] = 0;
		}
	}
}

int main() {
	int k, t;
	scanf("%d", &k);
	for(t = 1; t <= k; t++){
		check(t);
	}
	return 0;
}


