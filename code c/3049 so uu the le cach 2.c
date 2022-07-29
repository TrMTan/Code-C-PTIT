#include<stdio.h>
#include<string.h>

int check(char s[]){
	int i, chan = 0, le = 0;
	for(i = 0; i < strlen(s); i++){
		int tp = s[i] - '0';
		if(tp % 2 == 0) chan++;
		else le++;
	}
	if(chan < le && (s[strlen(s) - 1] - '0') % 2 == 1){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
}
