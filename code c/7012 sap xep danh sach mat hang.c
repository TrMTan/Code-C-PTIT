#include<stdio.h>
#include<string.h>

struct mathang{
	int id;
	char ten[100];
	char ma[100];
	float mua, ban;
};

typedef struct mathang mh;

void sapxep(mh a[], int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		int max = i;
		for(j = i + 1; j < n; j++)
		{
			if((a[j].ban - a[j].mua) > (a[max].ban - a[max].mua)){
				max = j;
			}
		}
		mh tmp = a[max];
		a[max] = a[i];
		a[i] = tmp;
	}
}

int main()
{
	int n, i;
	scanf("%d", &n);
	mh a[n];
	for(i = 0; i < n; i++)
	{
		a[i].id = i + 1;
		getchar();
		gets(a[i].ten);
		gets(a[i].ma);
		scanf("%f%f", &a[i].mua, &a[i].ban);
	}
	sapxep(a, n);
	for(i = 0; i < n; i++)
	{
		printf("%d %s %s %.2f\n", a[i].id, a[i].ten, a[i].ma, a[i].ban - a[i].mua);
	}
}
