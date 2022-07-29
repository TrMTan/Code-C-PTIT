#include<stdio.h>
#include<string.h>

// dao nguoc hai so 
void daonguoc(int a[], int n){
	int l = 0, r = n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l; --r;
	}
}
// a la so lon hon
void tru(char a[], char b[]){
	int n1 = strlen(a), n2 = strlen(b), n = 0, i; // n de tinh hieu
	int x[n1], y[n1], z[n1];
	for(i = 0; i < n1; i++) x[i] = a[i] - '0';
	for(i = 0; i < n2; i++) y[i] = b[i] - '0';
	daonguoc(x, n1); daonguoc(y, n2);
	for(i = n2; i < n1; i++){ // them 0 vao sau so nho hon
		y[i] = 0;
	}
	int nho = 0;
	for(i = 0; i < n1; i++){
		int hieu = x[i] - y[i] - nho;
		if(hieu < 0){
			nho = 1;
			z[n++] = 10 + hieu;
		}else{
			z[n++] = hieu;
			nho = 0;
		}
	}
	int ok = 0;
	for(i = n - 1; i >= 0; i--){
		if(ok == 0 && z[i]){ // neu co so 0 dung dau
			ok = 1;
		}
		if(ok) printf("%d", z[i]);
	}
	if(ok == 0) printf("0"); // hai so giong nhau
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[1001], b[1001];
		scanf("%s", a);
		scanf("%s", b);
		if(strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a, b) > 0)){
			tru(a, b);
		}else{
			tru(b, a);
		}
		printf("\n");
	}
}
