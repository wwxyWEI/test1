#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x<1){
		y=x;
		printf("y=%lf\n",y);
	}else if(x>=1&&x<10){
		y=2*x-11;
		printf("y=%lf",y);
	}else if(x>=10){
		y=3*x-11;
		printf("y=%lf",y);
	}
	return 0;
 } 
