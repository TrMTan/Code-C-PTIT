#include<stdio.h>
#include<string.h>

void check(char s[])
{
	int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
	for(int i = 0; i <= strlen(s); i++){
		if(s[i] == '2') s2++;
		else if(s[i] == '3') s3++;
		else if(s[i] == '5') s5++;
		else if(s[i] == '7') s7++;
	}
	for(int i = 0; i< strlen(s); i++){
		if(s[i] == '2' && s2 != 0) printf("2 %d\n", s2),s2 = 0;
		else if(s[i] == '3' && s3 != 0) printf("3 %d\n", s3),s3 = 0;
		else if(s[i] == '5' && s5 != 0) printf("5 %d\n", s5),s5 = 0;
		else if(s[i] == '7' && s7 != 0) printf("7 %d\n", s7),s7 = 0;
	}
}

int main(){
	char s[20];
	scanf("%s", s);
	check(s);
}
