#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	gets(s);
	int i, chu = 0, so = 0, kt = 0; 
	for(i = 0; i <strlen(s); i++){
		if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z')){
			chu++;
		}else if(s[i] >= '0' && s[i] <= '9'){
			so++;
		}else{
			kt++;
		}
	}
	printf("%d %d %d", chu, so, kt);
}
