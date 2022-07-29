#include<stdio.h>
#include<string.h>

int check(char s1[], char s2[]){
	int a = strlen(s1), b = strlen(s2), i;
	if(a != b) return 0;
	for(i = 0; i < a; i++){
		if(tolower(s1[i]) != tolower(s2[i])){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t, k;
	scanf("%d", &t);
	getchar();
	for(k = 1; k <= t; k++){
		char s1[201], s2[21];
		gets(s1);
		scanf("%s", s2);
		getchar();
		char *token = strtok(s1, " ");
		printf("Test %d: ", k);
		while(token != NULL){
			if(check(token, s2) == 0){
				printf("%s ", token);
			}
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}
