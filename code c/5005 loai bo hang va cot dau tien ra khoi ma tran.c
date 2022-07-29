#include<stdio.h>

int main(){
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
		int n,m,i,j;
		scanf("%d %d",&m,&n);
		int a[m][n];
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",k+1);
		for(i=1;i<m;i++){
			for(j=1;j<n;j++){
				printf("%d ",a[i][j]);	
			}
			printf("\n");
		}
	}
	printf("\n");
}

