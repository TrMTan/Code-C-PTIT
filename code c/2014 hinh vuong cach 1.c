#include<stdio.h>
int min(int a, int b){
	if(a < b){
		return a;
	}
	return b;
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 1; i <= 2*n-1; i++){
		for(j = 1; j <= 2*n-1;j++){
			int dis_nhonhat = min(min(i-1, 2*n-i-1), min(j-1, 2*n-j-1));
			printf("%d", n - dis_nhonhat);
		}
		printf("\n");
	}
}
