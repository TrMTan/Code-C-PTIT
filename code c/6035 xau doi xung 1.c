#include<stdio.h>
#include<string.h>

int check(char s[]){
	int l = 0, r = strlen(s) - 1;
	int count = 0;
	while(l <= r){
		if(s[l] != s[r]){
			count++;
		}
		l++;r--;
	}
	if(strlen(s) % 2 == 1 && count <= 1){
		return 1;
	}
	if(strlen(s) % 2 == 0 && count == 1){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[21];
		scanf("%s", s);
		if(check(s) == 1){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
