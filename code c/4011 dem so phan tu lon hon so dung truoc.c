#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, dem = 1;
		scanf("%d", &n);
		int a[n];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int max = a[0];
		for(i = 0; i < n; i++){
			if(a[i] > max){
				max = a[i];
				dem++;
			}
		}
		printf("%d\n", dem);
	}
	return 0;
}
