//��x^y��ֵ������ָ�����mypow��ָ��Ĵ洢��Ԫ
#include <stdio.h>
#include <math.h>

/*���㸡�������ݣ�pow������ԭ��Ϊ��double pow(double x,double y);
�������õ���ʽ��pow(double n,double e)
�÷�������n��e����
����ֵ�����ظ�������
*/

void my_power(double x, double y, double* mypow)
{
	*mypow = pow(x,y);//����pow��������x^y��ֵ������mypow��ָ��Ĵ洢��Ԫ
}

int main()
{
	double a, b, pow, * ppow = &pow;//ָ��ppowָ�����pow
	printf("Please input two floating point numbers separated by spaces:\n");
	scanf("%lf%lf",&a,&b);
	my_power(a,b,ppow);
	printf("%.2lf to %.2lf is %.2lf.\n",a,b,pow);
	return 0;
}