#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, j;
		scanf("%d", &n);
		int a[30];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int dem = 0;
		for(i = 0; i < n; i++){
			if(a[i] == a[i + 1]){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}
