#include<stdio.h>
#include<math.h>

double Func(double x ) //���庯������
{
	return 9 * x * x - sin(x) - 1;
}

int main(void)
{
	double a=	Func(0.1250);

	double x0, x1, x2, fx0;// ��x1,x2�� �е�x0  f(x0)
	double eps = 1e-6; //���徫��

	printf("����x1 x2\n");
	scanf_s("%lf %lf",&x1,&x2);

	if (Func(x1) * Func(x2) < 0) //�����ڶ���
	{
		while (1)//���䲻���㾫��
		{
			x0 = (x1 + x2) / 2;
			fx0 = Func(x0);
			if (fabs(fx0) < eps)//���㾫�� �㹻�ӽ�0 ȡ����ֵ
			{
				break;
			}
			else if (Func(x0) * Func(x1) < 0) //���������			{
			{
				//��������
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
		printf("�޽�\n");
	}

	return 0;
}