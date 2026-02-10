#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x)
{
	return 2*x*x*x-4*x*x+3*x-6;	
}

int main()
{
	double a=-10,b=10;
	double c;
	int i;
	
	if(f(a)*f(b)>=0)
	{
		printf("错误");
		system("pause");
		return -1;
	}
	for(i=1;i<=20;i++)
	{
		c=(a+b)/2;
		printf("第%d次迭代：a=%.6f,b=%.6f,c=%.6f,f(c)=%.6f\n",i,a,b,c,f(c));
		if(fabs(f(c))<0.0001) 
		{
			printf("根为%.6lf",c);
		}
		else if(f(c)*f(a)>0)
		{
			a=c;
		}
		else if(f(c)*f(a)<0)
		{
			b=c;
		}
		if(b-a<0.0001)
		{
			printf("近似根为%.6lf",c);
			break;
		}
	}
		if(i>20)
		{	printf("20次无法找到精确根");
		 } 
	system("pause");
	return 0;
}
 
