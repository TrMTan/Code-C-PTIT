#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, check = 0;
		scanf("%d", &n);
		int a[n];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(i = 0; i < n; i++){
			if(a[i] != a[n - i - 1]){
				check = 1;
				break;
			}
		}
		if(check == 0) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
