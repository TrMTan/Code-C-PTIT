#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool tang(char s[]){	// tang chat
	if(s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11]) return true;
	return false;
}
bool bang(char s[]){	// chu so bang nhau
	bool check1 = false, check2 = false;
	if(s[6] == s[7] && s[7] == s[8]) check1 = true;
	if(s[10] == s[11]) check2 = true;
	if(check1 && check2) return true;
	return false;
}

bool loc(char s[]){		// so 8 va 6
	if(s[6] != '6' && s[6] != '8') return false;
	if(s[7] != '6' && s[7] != '8') return false;
	if(s[8] != '6' && s[8] != '8') return false;
	if(s[10] != '6' && s[10] != '8') return false;
	if(s[11] != '6' && s[11] != '8') return false;
	return true;
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[20];
		gets(s);
		if(tang(s) || bang(s) || loc(s)) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}
