#include<stdio.h>

int c[100001];
int main(){
	int n;
	scanf("%d", &n);
	int i, a, b;
	for(i = 0; i < n - 1; i++){
		scanf("%d %d", &a, &b);
		c[a]++;
		c[b]++;
	}
	int check = 0;
	for(i = 1; i <= n; i++){
		if(c[i] != 1 && c[i] != n - 1){
			check = 1;
			break;
		}
	}
	if(check == 0) printf("Yes");
	else printf("No");
}
