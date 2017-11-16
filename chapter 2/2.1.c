//将第一题使用while语句改写
/*while语句写法*/
#include <stdio.h>
void main(void)
{
	int i=1, n, s = 1;
	printf("Please enter n:");
	scanf("%d", &n);
	while (i <= n)
	{
		s = s*i;
		i++;
	}
	printf("%d! = %d", n, s);
}

