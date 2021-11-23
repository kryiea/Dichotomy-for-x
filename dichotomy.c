#include<stdio.h>
#include<math.h>

double Func(double x ) //定义函数方程
{
	return 9 * x * x - sin(x) - 1;
}

int main(void)
{
	double a=	Func(0.1250);

	double x0, x1, x2, fx0;// （x1,x2） 中点x0  f(x0)
	double eps = 1e-6; //定义精度

	printf("输入x1 x2\n");
	scanf_s("%lf %lf",&x1,&x2);

	if (Func(x1) * Func(x2) < 0) //零点存在定理
	{
		while (1)//区间不满足精度
		{
			x0 = (x1 + x2) / 2;
			fx0 = Func(x0);
			if (fabs(fx0) < eps)//满足精度 足够接近0 取绝对值
			{
				break;
			}
			else if (Func(x0) * Func(x1) < 0) //在左边区间			{
			{
				//修正区间
				x2 = x0;
			}
			else if (Func(x0) * Func(x2) < 0)
			{
				x1 = x0;
			}
		}
		printf("%lf\n", x0/2);

	}
	else
	{
		printf("无解\n");
	}

	return 0;
}