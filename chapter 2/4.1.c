//打印如下杨辉三角形。
#include<stdio.h>
#define Pas_Triangle_mlenth 20
int main(void)
{
	int num[Pas_Triangle_mlenth][Pas_Triangle_mlenth];
	int i, j, k;
	int n;


	for (i = 0; i < Pas_Triangle_mlenth; i++)
	{
		num[i][0] = 1;
		num[i][i] = 1;
		for (j = 1; j < i; j++)
			num[i][j] = num[i][j - 1] * (i - j + 1) / j;
	}//初始化Ci,j。
	scanf("%d", &n);
	getchar();
	while (n<=12&&n>=1)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 2 * (n - i-1) ; k > 0; k--)
				putchar(' ');
			for (j = 0; j <= i; j++)
				printf("%-4d", num[i][j]);
			putchar('\n');
		}

		putchar('\n');
		scanf("%d", &n);
		getchar();
	}
}
