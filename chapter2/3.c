//修改第1题，输入改为“整数S”，输出改为“满足n！≥S的最小整数n”。例如输入整数40310，输出结果为n=8。
/*do-while语句写法*/
#include <stdio.h>
int divisible_max(int S);
void main(void)
{
	int S, result;

	printf("Please enter S:");
	scanf("%d", &S);
	result = divisible_max(S);
	printf("%d", result);
}
int divisible_max(int S)
{
	int i = 1, s = 1;

	do
	{
		s *= i;
		i++;
	} while (s < S);

	return i - 1;
}

