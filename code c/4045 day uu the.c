#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n = 0, chan = 0, le = 0;
		char kitu = ' ';
		while(kitu != '\n'){
			int x;
			scanf("%d", &x);
			n++;
			if(x % 2 == 0) chan++;
			if(x % 2 != 0) le++;
			kitu = getchar();
		}
		if((n % 2 == 0 && chan > le) || (n % 2 != 0 && le > chan)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
