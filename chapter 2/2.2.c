//修改第一题，使用do while 改写
/*do-while语句写法*/
#include <stdio.h>
void main(void)
{
	int i=1, n, s = 1;
	printf("Please enter n:");
	scanf("%d", &n);
	do
	{
		s = s*i;
		i++;
	} while (i <= n);
	printf("%d! = %d", n, s);
}

