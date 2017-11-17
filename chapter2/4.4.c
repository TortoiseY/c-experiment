//编写一个程序，用牛顿迭代法求方程f(x)=3x³－4x²－5x+13=0满足精读0.000001的一个近似根，并在屏幕上输出所求近似根。
#include<stdio.h>
#include<math.h>
double FUNCTION_F(double x);
double Derivative_F(double x);
#define PRECISION 0.000001
int main(void)
{
	double x1, x2;
	x1 = 1;
	x2 = 1;
	while (fabs(-FUNCTION_F(x1)/Derivative_F(x1))>PRECISION)
	{
		x1 = x2;
		x2 = x1 - FUNCTION_F(x1) / Derivative_F(x1);
		
	}
	printf("%lf", x2);
}
double FUNCTION_F(double x) 
{
	return 3 * x*x*x - 4 * x*x - 5 * x + 13;
}
double Derivative_F(double x) 
{ 
	return 9 * x*x - 8 * x - 5;
} 
