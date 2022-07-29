#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, j;
		scanf("%d", &n);
		long long a[100001];
		for(i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		int check = 0;
		for(i = 0; i < n - 1; i++){
			for(j = i + 1; j < n; j++){
				if(a[i] == a[j]){
					printf("%lld", a[i]);
					check = 1;
					break;
				}
			}
			if(check){
				break;
			}
		}
		if(check == 0){
			printf("NO");
		}
		printf("\n");
	}
}

