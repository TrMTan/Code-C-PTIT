#include<stdio.h>
#include<math.h>

int nt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int b[100];

void sont(){
	int i = 0, gt = 0;
	while(gt < 100){
		if(nt(i)){
			b[gt] = i;
			++gt;
		}
		++i;
	}
}

int main(){
	sont();
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int n;
		scanf("%d", &n);
		int a[25][25], i, j;
		int gt = 0, h1 = 0, c1 = 0, h2 = n - 1 , c2 = n - 1;
		while(h1 <= h2 && c1 <= c2){
			for(i = c1; i <= c2; i++){
				a[h1][i] = b[gt];
				++gt;
			}
			++h1;
			for(i = h1; i <= h2; i++){
				a[i][c2] = b[gt];
				++gt;
			}
			--c2;
			if(c1 <= c2){
				for(i = c2; i >= c1; i--){
					a[h2][i] = b[gt];
					++gt;
				}
				--h2;
			}
			if(h1 <= h2){
				for(i = h2; i >= h1; i--){
					a[i][c1] = b[gt];
					++gt;
				}
				++c1;
			}
		}
		printf("Test %d:\n", k);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		} 
	}
	
}

