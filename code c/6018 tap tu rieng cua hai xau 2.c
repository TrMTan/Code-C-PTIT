#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[201];
		gets(s1); 
		char s2[201];
		gets(s2);
		char a[201][201];
		char b[201][201];
		int n = 0, m = 0, i, j;
		// tach tu trong xau 1 luu vao mang a
		char *token1 = strtok(s1, " ");
		while(token1 != NULL){
			int check = 1;
			for(i = 0; i < n; i++){
				if(strcmp(a[i], token1) == 0){
					check = 0;
					break;
				}
			}
			if(check == 1){
				strcpy(a[n++], token1);
			}
			token1 = strtok(NULL, " ");
		}
		// sap xep cac tu trong a theo thu tu xuat hien trong tu dien
		for(i = 0; i < n - 1; i++){
			for(j = i + 1; j < n; j++){
				if(strcmp(a[i], a[j]) > 0){
					char tmp[201];
					strcpy(tmp, a[i]);
					strcpy(a[i], a[j]);
					strcpy(a[j], tmp);
				}
			}
		}
		// tach tu trong xau 2 luu vao mang b
		char *token2 = strtok(s2, " ");
		while(token2 != NULL){
			int check = 1;
			for(i = 0; i < m; i++){
				if(strcmp(b[i], token2) == 0){
					check = 0;
					break;
				}
			}
			if(check == 1){
				strcpy(b[m++], token2);
			}
			token2 = strtok(NULL, " ");
		}
		for(i = 0; i < n; i++){
			int check = 1;
			for(j = 0; j < m; j++){
				if(strcmp(a[i], b[j]) == 0){
					check = 0;
					break;
				}
			}
			if(check == 1){
				printf("%s ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
