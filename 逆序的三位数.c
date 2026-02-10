#include<stdio.h>

int main()
{
	int R = 0;

	printf("请输入一个三位数：");
	scanf("%d",&R); 
	
	int new_R,T,Y,U;
	T = R/100;
	Y = R%10;
	U = (R%100)/10;
	
	new_R = T + Y*100 + U*10;
	printf("结果为:%d\n",new_R);
	 
	return 0;
	
 } 
