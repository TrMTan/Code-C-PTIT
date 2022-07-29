long long fibo[100];

void fibonacci(){
	fibo[0] = 0;
	fibo[1] = 1;
	int i;
	for(i = 2; i <= 90; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}

fibonacci();
int n;
scanf("%d", &n);
int a[10][10], i, j;
int gt = 0, h1 = 0, c1 = 0, h2 = n - 1 , c2 = n - 1;
while(h1 <= h2 && c1 <= c2){
	for(i = c1; i <= c2; i++){
		a[h1][i] = fibo[gt];
		++gt;
	}
	++h1;
	for(i = h1; i <= h2; i++){
		a[i][c2] = fibo[gt];
		++gt;
	}
	--c2;
	if(c1 <= c2){
		for(i = c2; i >= c1; i--){
			a[h2][i] = fibo[gt];
			++gt;
		}
		--h2;
	}
	if(h1 <= h2){
		for(i = h2; i >= h1; i--){
			a[i][c1] = fibo[gt];
			++gt;
		}
		++c1;
	}
}
for(i = 0; i < n; i++){
	for(j = 0; j < n; j++){
		printf("%lld ", a[i][j]);
	}
	printf("\n");

} 

