#include<stdio.h>
#include<string.h>
int kt(char s[]){
	if(s[0] == '0') return 0;
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] < '0' || s[i] > '9'){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[1005];
		gets(s);
		int i;
		int a[10] = {0};
		if(kt(s) == 0) printf("INVALID\n");
		else{
			for(i = 0; i < strlen(s); i++){
				a[s[i] - '0']++;
			}
			int check = 1;
			for(i = 0; i < 10; i++){
				if(a[i] == 0){
					printf("NO\n");
					check = 0;
					break;
				}
			}
			if(check == 1){
				printf("YES\n");
			}
		}
	}
	return 0;
}
