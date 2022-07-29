#include<stdio.h>
#include<string.h>

//dao nguoc hai so
void daonguoc(int a[], int n){
	int l = 0, r = n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l; --r;
	}
}

//cong 2 ky tu coi a la so co nhieu chu so hon b

void add(char a[], char b[]){
	int n1 = strlen(a), n2 = strlen(b), n = 0, i; // n de tinh tong 2 so
	int x[n1], y[n1], z[n1 + 1];
	for(i = 0; i < n1; i++){
		x[i] = a[i] - '0';
	}
	for(i = 0; i < n2; i++){
		y[i] = b[i] - '0';
	}
	daonguoc(x, n1); daonguoc(y, n2);
	for(i = n2; i < n1; i++){ // dien them so 0 vao sau so nho hon
		y[i] = 0;
	}
	int nho = 0;
	for(i = 0; i < n1; i++){
		int tong = x[i] + y[i] + nho;
		z[n++] = tong % 10; //neu tong >10 thi chia lay phan du de cong
		nho = tong / 10;		
	}
	if(nho) z[n++] = nho;
	for(i = n - 1; i >= 0; i--){ // in ra tong 2 so
		printf("%d", z[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[501], b[501];
		scanf("%s", a);
		scanf("%s", b);
		if(strlen(a) >= strlen(b)) add(a, b);
		else add(b, a);
		printf("\n");
	}
}
