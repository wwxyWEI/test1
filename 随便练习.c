#include<stdio.h>
#define EPSILON 1e-9
#include<math.h>
#include<stdbool.h>


int main()
{
	
	printf("请输入三角形边长");
	double a,b,c; 
	scanf("%lf %lf %lf",&a,&b,&c);
	bool A=(a+b>c)&&(a+c>b)&&(b+c>a);
	if(A==true)
	{
	printf("true--可以构成三角形\n");
	}else{printf("false--不可以构成三角形\n"); 
	} 
	if((fabs(a*a+b*b-c*c)<EPSILON&&fabs(a-b)<EPSILON)||
		(fabs(a*a+c*c-b*b)<EPSILON&&fabs(a-c)<EPSILON)||
		(fabs(b*b+c*c-a*a)<EPSILON&&fabs(b-c)<EPSILON)){
			printf("其为等腰直角三角形"); 
		} 
		else if((fabs(a*a+b*b-c*c)<EPSILON)||
				(fabs(a*a+c*c-b*b)<EPSILON)||
				(fabs(b*b+c*c-a*a)<EPSILON)){
					printf("其仅为直角三角形");
				}
	return 0;
}
