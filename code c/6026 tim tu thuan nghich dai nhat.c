#include<stdio.h>
#include<string.h>

struct word{
	char tu[100]; //  gs tu nhap vao 100 ky tu
	int tanso;
};

typedef struct word word;

// kt tinh thuan nghich
int check(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l < r){
		if(c[l] != c[r]){
			return 0;
		}
		++l; --r;
	}
	return 1;
}

// tim chi so cua tu trong danh sach
int find(word a[], int n, char tmp[]){
	int i;
	for(i = 0; i < n; i++){
		if(strcmp(tmp, a[i].tu) == 0){
			return i;
		}
	}
	return -1;
}

int main(){
	word a[1001];
	int n = 0, i; // dem so tu thuan nghich
	char tmp[100]; // chuoi nhap vao
	while((scanf("%s", tmp)) != -1){  // kt den cuoi file
		if(check(tmp)){
			int idx = find(a, n, tmp);
			if(idx == -1){
				strcpy(a[n].tu, tmp); //copy vao mang word
				a[n].tanso = 1;
				++n;
			}else{
				a[idx].tanso += 1;
			}
		}
	}
	int max_len = 0; // tim chieu dai tu dai nhat
	for(i = 0; i < n; i++){
		if(max_len < strlen(a[i].tu)) max_len = strlen(a[i].tu);
	}
	for(i = 0; i < n; i++){
		if(strlen(a[i].tu) == max_len){
			printf("%s %d\n", a[i].tu, a[i].tanso);
		}
	}
}
