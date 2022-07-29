#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	gets(s);
	int i, dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, dem5 = 0, dem6 = 0, dem7 = 0, dem8 = 0;
	for(i = 0; i < strlen(s); i++){
		if(s[i] == '(') dem1++;
		if(s[i] == ')') dem2++;
		if(s[i] == '[') dem3++;
		if(s[i] == ']') dem4++;
		if(s[i] == '{') dem5++;
		if(s[i] == '}') dem6++;
		if(s[i] == '"') dem7++;
		if(s[i] == 39) dem8++;
	}
	if(dem1 == dem2 && dem3 == dem4 && dem5 == dem6 && (dem7 % 2 == 0) == (dem8 % 2 == 0)){
		printf("1");
	}else{
		printf("0");
	}
}
