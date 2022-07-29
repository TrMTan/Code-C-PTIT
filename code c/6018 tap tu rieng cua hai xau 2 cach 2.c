#include<stdio.h>
#include<string.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y); 
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[201], s2[201];
		gets(s1); gets(s2);
		char a[201][201];
		char b[201][201];
		int n = 0, m = 0, i, j;
		char *token = strtok(s1, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		token = strtok(s2, " ");
		while(token != NULL){
			strcpy(b[m++], token);
			token = strtok(NULL, " ");
		}
		qsort(a, n,sizeof(a[0]), cmp);
		for(i = 0; i < n; i++){
			while(strcmp(a[i], a[i + 1]) == 0) ++i;
			int check = 0;
			for(j = 0; j < m; j++){
				if(strcmp(a[i], b[j]) == 0){
					check = 1;
					break;
				}
			}
			if(!check){
				printf("%s ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
