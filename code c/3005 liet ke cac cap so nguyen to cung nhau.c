#include<stdio.h>

int ucln(int a, int b){
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = a; i < b; i++){
		for(j = i + 1; j <= b; j++){
			if(ucln(i, j) == 1){
				printf("(%d,%d)\n", i, j);
			}
		}
	}
}
