#include<stdio.h>
#include<string.h>

struct sinhvien
{
	int id;
	char ten[100];
	char ngaysinh[100];
	float d1, d2, d3;
};

typedef struct sinhvien sv;

int main()
{
	int n, i;
	scanf("%d", &n);
	sv a[n];
	float diem_max = 0;
	for(i = 0; i < n; i++)
	{
		getchar();
		a[i].id = i + 1;
		gets(a[i].ten);
		scanf("%s", a[i].ngaysinh);
		scanf("%f%f%f", &a[i].d1, &a[i].d2, &a[i].d3);
		if((a[i].d1 + a[i].d2 + a[i].d3) > diem_max)
		{
			diem_max = a[i].d1 + a[i].d2 + a[i].d3;
		}
	}
	for(i = 0; i < n; i++)
	{
		if(diem_max == a[i].d1 + a[i].d2 + a[i].d3)
		{
			printf("%d %s %s %.1f\n", a[i].id, a[i].ten, a[i].ngaysinh, a[i].d1 + a[i].d2 + a[i].d3);
		}
	}
}

