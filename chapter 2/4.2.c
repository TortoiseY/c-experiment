//编写一个程序，将用户输入的任意正整数逆转，例如，输入1234，输出4321

#include <stdio.h>
int Digit(int x);
int main(void)
{
	int x, i, j;
	int num[20];
	int newNumber;
	int lenth_of_x;

	scanf("%d", &x);
	while (x)
	{
		lenth_of_x = Digit(x);

		for (i = 0; i <= lenth_of_x; i++)
		{
			num[i] = x % 10;//i=0,1,2,3...分别取x的个位，十位，百位，千位数....
			x = x / 10;
			//printf("%d\n", num[i]);
		}
		for (i = lenth_of_x, j = 1, newNumber = 0; i >= 0; i--, j *= 10)
		{
			num[i] *= j;
			newNumber += num[i];

		}
		printf("%d\n", newNumber);
		scanf("%d", &x);
		getchar();
	}
}
int Digit(int x)
{
	int i, count;
	count = 0;
	i = 10;
	while (x / i)
	{
		count++;
		i *= 10;
	}//判断输入数字位数
	return count;
}

