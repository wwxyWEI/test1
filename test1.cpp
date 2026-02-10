#define PI 3.14
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int S,R,C;
	R=1;
	C=2*PI*R;
	printf("周长结果:%d",C,R);
	S=PI*R*R;
	R=1;
	printf("面积结果：%d",S,R);
	return 0;
 } 
