#include <stdio.h>
#include <math.h>

int songuyento(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			return 1;
			break;
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int d = 0;
	for(int i = 2; i >= 1; i++){
		if(songuyento(i) != 1){
			d++;
			printf("%d\n", i);
		}
		if(d == n) break;
	}
	return 0;
}
