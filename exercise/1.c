//求x^y的值并存入指针变量mypow所指向的存储单元
#include <stdio.h>
#include <math.h>

/*计算浮点数的幂，pow函数的原型为：double pow(double x,double y);
函数调用的形式：pow(double n,double e)
用法：计算n的e次幂
返回值：返回浮点型数
*/

void my_power(double x, double y, double* mypow)
{
	*mypow = pow(x,y);//调用pow函数计算x^y的值并存入mypow所指向的存储单元
}

int main()
{
	double a, b, pow, * ppow = &pow;//指针ppow指向变量pow
	printf("Please input two floating point numbers separated by spaces:\n");
	scanf("%lf%lf",&a,&b);
	my_power(a,b,ppow);
	printf("%.2lf to %.2lf is %.2lf.\n",a,b,pow);
	return 0;
}