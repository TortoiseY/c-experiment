//编写一个程序，将输入的一行字符复制到输出，复制过程中，将一个以上的空格字符用一个空格代替。
//输入一个数字表示x字符串的数量
//接下来是x个z包含z空格的字符串
/*空格处理*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	int N;
	int i,j;
	char mystring[100];

	scanf("%d", &N);
	getchar();
	for (i = 1; i <= N; i++)
	{
		fgets(mystring, 100, stdin);
		for (j = 0; j < strlen(mystring); j++)
		{
			if (mystring[j] == ' ')
			{
				putchar(mystring[j]);
				while (mystring[j] == ' ') j++;
			}
			putchar(mystring[j]);
		}
	}

}

