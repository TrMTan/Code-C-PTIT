#include<stdio.h>

int main(){
	int m, n, p, q, i, j, k;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	long long A[m][n], B[n][p], C[p][q], AB[m][p], ABC[m][q];
	//nhap ma tran dau vao
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%lld", &A[i][j]);
		}
	}
	for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
        	scanf("%lld", &B[i][j]);
		} 
    }
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
        	scanf("%lld", &C[i][j]);
		}
    }
    // tich 2 ma tran A[m][n] va B[n][p]
    for(i = 0; i < m; i++){
    	for(j = 0; j < p; j++){
    		AB[i][j] = 0;
    		for(k = 0; k < n; k++){
    			AB[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	// tich 2 ma tran AB[m][p] va C[p][q];
	for(i = 0; i < m; i++){
		for(j = 0; j < q; j++){
			ABC[i][j]= 0;
			for(k = 0; k < p; k++){
				ABC[i][j] += AB[i][k] * C[k][j];
			}
			printf("%d ", ABC[i][j]);
		}
		printf("\n");
	}
	return 0;    
}
