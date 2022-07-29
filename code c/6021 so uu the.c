#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[1005];
		gets(s);
		int check = 1;
		int chan = 0, le = 0, i;
		if(s[0] == '0'){
				check = 0;
				printf("INVALID");
		}else{
			for(i = 0 ; i < strlen(s) ; i++){
				if(s[i] > '9' || s[i] < '0') {
					check = 0;
					printf("INVALID");
					break;
				}
				else{
					if(s[i] == '0'|| s[i] == '2'|| s[i] == '4' || s[i] == '6' || s[i] == '8') chan ++;
					else le++;
				}
			}
		}
		if(check != 0){
			if(strlen(s) % 2 == 0 && chan > le) printf("YES");
			else if(strlen(s) % 2 != 0 && chan < le) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
	return 0;
}

