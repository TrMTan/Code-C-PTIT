#include<stdio.h>
#include<string.h>

int main(){
	char s[51];
	gets(s);
	int i, j;
	int l[51];
	l[0] = 1;
	for(i = 0; i < strlen(s); i++){
		int max = 0;
		for(j = 0; j < i; j++){
			if(s[i] > s[j] && max < l[j]){
				max = l[j];
			}
		}
		l[i] = max + 1;
	}
	int MAX = 0;
	for(i = 0; i < strlen(s); i++){
		if(MAX < l[i]){
			MAX = l[i];
		}
	}printf("%d", 26- MAX);
}
