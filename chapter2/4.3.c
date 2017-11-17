// 假设工资税金按以下方法计算X<=1000元，不收取税金。1000<=x<2000，收取5%的税金;2000<=X<3000。收取10%的税金;3000<=X<4000。收取15%的税金;4000<=X<5000。收取20%的税金;X>5000收取25%的税金.编写一个程序，输入工资金额输出应收取税金额度。要求分别用if语句和switch语句来实现。
#include<stdio.h>
#define Tax_level1 0
#define Tax_level2 0.05
#define Tax_level3 0.10
#define Tax_level4 0.15
#define Tax_level5 0.20
#define Tax_level6 0.25
#define Tax_Boundary1 1000
#define Tax_Boundary2 2000
#define Tax_Boundary3 3000
#define Tax_Boundary4 4000
#define Tax_Boundary5 5000
#define TAX1 (Tax_Boundary2-Tax_Boundary1)*Tax_level2//1000-2000的税
#define TAX2 (Tax_Boundary3-Tax_Boundary2)*Tax_level3+TAX1//1000-3000的税
#define TAX3 (Tax_Boundary4-Tax_Boundary3)*Tax_level4+TAX2//1000-4000的税
#define TAX4 (Tax_Boundary5-Tax_Boundary4)*Tax_level5+TAX3//1000-5000的税

double If_Method(double wage);
double Switch_Method(double wage);
int main(void)
{
	double wage;

	scanf("%lf", &wage);
	while (wage != 0)
	{
		printf("if:%lf\n", If_Method(wage));
		printf("switch:%lf\n", Switch_Method(wage));
		scanf("%lf", &wage);
	}
}
double If_Method(double wage)
{
	double tax;

	if (wage <= Tax_Boundary1) tax = Tax_level1*wage;
	else if (wage <= Tax_Boundary2) tax = Tax_level2*(wage - Tax_Boundary1);
	else if (wage <= Tax_Boundary3) tax = Tax_level3*(wage - Tax_Boundary2) + TAX1;
	else if (wage <= Tax_Boundary4) tax = Tax_level4*(wage - Tax_Boundary3) + TAX2;
	else if (wage <= Tax_Boundary5) tax = Tax_level5*(wage - Tax_Boundary4) + TAX3;
	else tax = Tax_level6*(wage - 5000) + TAX4;

	return tax;
}
double Switch_Method(double wage)
{
	double tax;
	switch ((int)(wage - 1) / 1000)
	{
	case 0:tax = Tax_level1*wage; break;
	case 1:tax = Tax_level2*(wage - Tax_Boundary1); break;
	case 2:tax = Tax_level3*(wage - Tax_Boundary2) + TAX1; break;
	case 3:tax = Tax_level4*(wage - Tax_Boundary3) + TAX2; break;
	case 4:tax = Tax_level5*(wage - Tax_Boundary4) + TAX3; break;
	case 5:tax = Tax_level6*(wage - 5000) + TAX4; break;

	default:
		break;
	}
	return tax;
}

