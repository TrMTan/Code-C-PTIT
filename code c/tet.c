#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[201] = {};
        gets(s);
        int n = 0;
        int kt = 0;
        while(kt != EOF){
			scanf("%s", &s[++n]);
			kt = getchar();
		}
        printf("%d\n", n);
    }
    return 0;
}

