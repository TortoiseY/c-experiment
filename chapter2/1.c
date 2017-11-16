#include <stdio.h>
void main(void)
{
	int i, n, s = 1;
	printf("Please enter n:");
	scanf("%d", &n);//键盘读取整型n应加上&
	for (i = 1; i <= n; i++)//for()各参数应用分号分开，而不是逗号
		s = s*i;
	printf("%d! = %d", n, s);
}

